x = 10
elementi = ["Quadrato", "Cerchio", "Rettangolo"]

print(" ".join(elementi))
def calcoli(nome, alt, lun):
    global elementi
    if nome == "Quadrato":
        del elementi[0]
        

def somma(y):
    global x
    x = x + y
    return x

print(f"somma {x} + 6 = {somma(6)}")
print(f"somma {x} + 6 = {somma(6)}")

def sottrazione(z,k=10):
    return z - k

print(f"sottrazione {sottrazione(30,5)}")
print(f"sottrazione {sottrazione(k=5, z=30)}")
print(f"sottrazione {sottrazione(z=30)}")
print(somma(6), sottrazione(30), end=" ", sep="->")
print(somma(6), sottrazione(30), end=" ")


