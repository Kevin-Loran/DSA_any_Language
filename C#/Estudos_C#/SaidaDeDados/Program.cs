using System.Globalization;

double salario = 4.589;
int idade = 19;
string nome = "Maria Silva";
char genero = 'F';

CultureInfo CI = CultureInfo.InvariantCulture;

Console.Write("A funcionaria " + nome + " do genero "+ genero + " e idade "+ idade + " ganha $" + salario.ToString("F4", CI) );