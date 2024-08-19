base = float(input("Insira a base: "))
exp = float(input("Insira o expoente: "))
if(exp!=int(exp)):
    print("O expoente deve ser inteiro para este caso.")
else:
    cont=0
    res=1
    while(cont<exp):
        res=base*res
        cont=cont+1
    print(res)