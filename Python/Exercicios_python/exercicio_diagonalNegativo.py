m = int(input("Qual a ordem da matriz: "))

mat: [int] = [[0 for _ in range(m)] for _ in range(m)]

contador = 0
for i in range(m):
    for j in range(m):
        mat[i][j] = int(input(f"Elemento[{i},{j}]: "))
        if (mat[i][j] < 0):
            contador += 1

print(f"\nDiagonal Principal: ", end='')
for i in range(m):
    print(mat[i][i], end=' ')
print("\nnúmero de negativos: ", contador)
