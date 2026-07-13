print("Digite dois números:")
x = int(input())
y = int(input())
z = 0

if x < y:
    z = x
    x = y
    y = z

soma = 0
for i in range(y , x):
    if i % 2 != 0:
        soma += i

print(f"\nA SOMA DOS IMPARES: {soma}")