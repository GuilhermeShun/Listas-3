print("Insira cinco números inteiros.")
a = float(input("Primeiro número: "))
if(a!=int(a)):
    print("O número deve ser inteiro.")
else:
    b = float(input("Segundo número: "))
    if(b!=int(b)):
        print("O número deve ser inteiro.")
    else:
        c = float(input("Terceiro número: "))
        if(c!=int(c)):
            print("O número deve ser inteiro.")
        else:
            d = float(input("Quarto número: "))
            if(d!=int(d)):
                print("O número deve ser inteiro.")
            else:
                e = float(input("Quinto número: "))
                if(e!=int(e)):
                    print("O número deve ser inteiro.")
                else:
                    lista = [a, b, c, d, e]
                    lista.sort()
                    print("Maior valor: %.0f" %lista[4])
                    print("Menor valor: %.0f" %lista[0])