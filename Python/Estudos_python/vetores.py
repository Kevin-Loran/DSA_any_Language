n = int(input("Tamanho do vetor: "))
meu_vetor: [int] = [0 for x in range(n)]

valor = 0
for i in range(0, n):
    valor = int(input("Digite um valor: "))
    meu_vetor[i] = valor

print("\nVetor digitado: ")
for i in range(0, n):
    print(meu_vetor[i])
