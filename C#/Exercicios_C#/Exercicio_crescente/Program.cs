using System.Globalization;
CultureInfo CI = CultureInfo.InvariantCulture;

int x, y;

Console.WriteLine("Digite dois valores: ");
x = int.Parse(Console.ReadLine());
y = int.Parse(Console.ReadLine());

if ( x > y) {
    Console.WriteLine("DECRESCENTE");
} else if ( x < y) {
    Console.WriteLine("CRESCENTE");
}
