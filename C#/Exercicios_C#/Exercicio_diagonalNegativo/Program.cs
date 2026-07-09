Console.WriteLine("Qual a ordem da matriz: ");
int m = int.Parse(Console.ReadLine());

int[,] matriz = new int [m, m];

int contador = 0;
for (int i = 0; i< m; i++) {
    for (int j = 0; j< m; j++) {
        Console.WriteLine($"Elemento[{i}, {j}]: ");
        matriz[i, j] = int.Parse(Console.ReadLine());
        if (matriz[i, j] < 0) {
            contador += 1;
        }
    }
}

Console.WriteLine("Diagonal Principal: ");
for (int i = 0; i < m; i++) {
     Console.Write(matriz[i, i]+  " ");
}

Console.WriteLine("Quantidade de negativo: " + contador);
