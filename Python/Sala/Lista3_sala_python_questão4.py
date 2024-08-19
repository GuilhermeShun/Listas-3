n = float(input("Insira um número positivo menor ou igual a 50: "))
if not(n<=0 or n>50):
    while True:
        n = n*3
        if(n>=250):
            break
        print(n)
else:
    print("Número inválido.")
