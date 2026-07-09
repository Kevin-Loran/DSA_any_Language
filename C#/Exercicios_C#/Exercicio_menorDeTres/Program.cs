using System.Globalization;
CultureInfo CI = CultureInfo.InvariantCulture;

int a, b, c, menor;

Console.WriteLine("Digite tres valores: ");
a = int.Parse(Console.ReadLine());
b = int.Parse(Console.ReadLine());
c = int.Parse(Console.ReadLine());

Console.WriteLine();

if (a < b && a < c) {
    menor = a;
}
else if (b < a && b < c) {
    menor = b;
}else {
    menor = c;
}

Console.WriteLine("o menor é: " + menor);
