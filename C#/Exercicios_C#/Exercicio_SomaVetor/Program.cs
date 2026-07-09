Console.WriteLine("Quantos numeros voce vai digitar: ");
int x = int.Parse(Console.ReadLine());
int[] numeros = new int[x];

int soma = 0;
for (int i = 0; i < x; i++) {
    Console.Write("Digite um número: ");
    numeros[i] = int.Parse(Console.ReadLine());
    soma += numeros[i];
}

double media = (double) soma / x;

Console.Write("VETOR = ");
for (int i = 0; i < x; i++) {
    Console.Write(numeros[i] + " ");
}

Console.WriteLine();
Console.WriteLine("SOMA = " + soma);
Console.WriteLine("MEDIA = " + media);

