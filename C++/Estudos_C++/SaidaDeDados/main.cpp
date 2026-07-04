#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main () {


    int idade;
    double salario;
    string nome;
    char sexo;

    idade = 32;
    salario = 4657.70;
    nome = "Maria Silva";
    sexo = 'F';

    cout << fixed << setprecision(2);
    cout << "A funcionaria " << nome << " do sexo " << sexo << " Tem " << idade << " anos e ganha " << salario << " de salario" << endl;

    return 0;
}
