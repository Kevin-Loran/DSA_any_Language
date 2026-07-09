using System.Globalization;

CultureInfo CI = CultureInfo.InvariantCulture;

double altura, comprimento, area, perimetro, diagonal;

Console.Write("Digite a altura do retangulo: ");
altura = double.Parse(Console.ReadLine());
Console.Write("Digite a comprimento do retangulo: ");
comprimento = double.Parse(Console.ReadLine());

Console.WriteLine("////////////////////////////////");

area = altura * comprimento;
perimetro = 2 * (altura + comprimento);
diagonal = Math.Sqrt((altura * altura) + (comprimento * comprimento)) ;

Console.WriteLine("area = " + area.ToString("F2", CI));
Console.WriteLine("perimetro = " + perimetro.ToString("F2", CI));
Console.WriteLine("diagonal = " + diagonal.ToString("F2", CI));