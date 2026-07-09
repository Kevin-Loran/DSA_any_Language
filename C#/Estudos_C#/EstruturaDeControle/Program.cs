int hora;
string resultado;

Console.Write("Digite a hora: ");
hora = int.Parse(Console.ReadLine());

if (hora >= 6 && hora < 12) {
    resultado = "bom-dia";
}
else if (hora > 12 && hora <= 18) {
    resultado = "boa-tarde";
} else {
    resultado = "boa-noite";
}

Console.WriteLine(resultado);
