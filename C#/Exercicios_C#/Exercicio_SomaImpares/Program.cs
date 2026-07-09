int x, y, z, i, soma;

Console.WriteLine("Digite dois valores: ");
x = int.Parse(Console.ReadLine());
y = int.Parse(Console.ReadLine());

if (x < y) {
    z = x;
    x = y;
    y = z;
}

soma = 0;
for (i = y; i < x; i++) {
    if (i % 2 != 0) {
        soma += i;
    }
}

Console.WriteLine("SOMA DOS IMPARES = " + soma);