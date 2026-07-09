using System.Globalization;
CultureInfo CI = CultureInfo.InvariantCulture;

int idade;
char genero;
double salario1, salario2;
string nome1, nome2;

Console.Write("Digite o nome: ");
nome1 = Console.ReadLine();
Console.Write("Digite o salario: ");
salario1 = double.Parse(Console.ReadLine(), CI);

Console.WriteLine("///////////////////////");
Console.Write("Digite o nome: ");
nome2 = Console.ReadLine();
Console.Write("Digite o salario: ");
salario2 = double.Parse(Console.ReadLine(), CI);
Console.WriteLine("///////////////////////");
Console.Write("Digite um genero: ");
genero = char.Parse(Console.ReadLine());
Console.Write("Digite uma idade: ");
idade = int.Parse(Console.ReadLine());