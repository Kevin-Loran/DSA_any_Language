a = int(input("Digite o primeiro valor: "))
b = int(input("Digite o segundo valor: "))
c = int(input("Digite o terceiro valor: "))

menor = 0

if (a < b and a < c):
    menor = a
elif (b < a and b < c):
    menor = b
else:
    menor = c

print("O menor valor é", menor)