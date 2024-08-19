num = float(input("Insira o número para tabuada: "))
if(num == int(num)) and (num>=0):
    print("Tabuada do %.0f:" %num)
    cont=0
    while(cont<=10):
        mult = num*cont
        print("%.0f x %i = %.0f" %(num, cont, mult))
        cont=cont+1

else:
    print("O número deve ser natural.")