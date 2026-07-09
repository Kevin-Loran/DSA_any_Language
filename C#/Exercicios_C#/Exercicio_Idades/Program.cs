using System.Globalization;
CultureInfo CI = CultureInfo.InvariantCulture;

Console.WriteLine("Dados da primeira pessoa: ");
Console.Write("nome: ");
string nome1 = Console.ReadLine();
Console.Write("idade: ");
int idade1 = int.Parse(Console.ReadLine());

Console.WriteLine("////////////////////////////");

Console.WriteLine("Dados da segunda pessoa: ");
Console.Write("nome: ");
string nome2 = Console.ReadLine();
Console.Write("idade: ");
int idade2 = int.Parse(Console.ReadLine());

Console.WriteLine();

double media = (double)(idade1 + idade2) / 2;

Console.WriteLine("a media de " + nome1 + " e "+ nome2 + " é de: " + media.ToString("F2", CI));