n = int(input("Quantos números voce irá ler: "))
soma = 0
for i in range(1, n):
    x = int(input("digite um numero: "))
    soma += x

print(f"\nA soma dos números é de {soma}")