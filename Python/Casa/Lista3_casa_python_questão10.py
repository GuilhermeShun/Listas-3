while True:
    while True:
        op = str(input("Para sair, digite 'S' \nOperação: "))
        if(op=="+" or op=="-" or op=="*" or op=="/" or op=="S"):
            break
    if(op=="S"):
        break
    else:
        a = float(input("Primeiro número: "))
        b = float(input("Segundo número: "))
        if(op=="+"):
            res = a+b
            print(res)
        if(op=="-"):
            res = a-b
            print(res)
        if(op=="*"):
            res = a*b
            print(res)
        if(op=="/"):
            if(b!=0):
                res = a/b
                print(res)
            else:
                print("Indefinido")
                
print("Calculadora encerrada.")


