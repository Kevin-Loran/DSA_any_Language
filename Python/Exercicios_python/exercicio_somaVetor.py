n = int(input("Quantos números voce irá digitar: "))

vet: [int] = [0 for x in range(n)]

soma = 0;
for i in range(n):
    vet[i] = int(input("Digite um valor: "))
    soma += vet[i]

media = soma / n
print("\nvalores = ", end=' ')
for i in range(n):
    print(vet[i], end=' ')

print("\nSoma =", soma)
print("Media = ", media)

