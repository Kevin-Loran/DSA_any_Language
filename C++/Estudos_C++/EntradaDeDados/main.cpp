#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

int main()
{
    double salario1, salario2;
    string nome1, nome2;
    int idade;
    char sexo;

    cout << "Digite o nome da pessoa 1: " << endl;
    getline(cin, nome1);
    cout << "Digite o salario: " << endl;
    cin >> salario1;

    cout << "Digite o nome da pessoa 2: " << endl;
    getline(cin, nome2);
    cin.ignore(INT_MAX, '\n');
    cout << "Digite o salario: " << endl;
    cin >> salario2;

    cout << "Digite a idade: " << endl;
    cin >> idade;

    cout << "Digite o sexo: " << endl;
    cin >> sexo;

    cout << fixed << setprecision(2);
    cout << "Nome 1: " << nome1 << endl;
    cout << "Salario 1: " << salario1 << endl;
    cout << "Nome 2: " << nome2 << endl;
    cout << "Salario 2: " << salario2 << endl;
    cout << "Idade: " << idade << endl;
    cout << "Sexo: " << sexo << endl;

    return 0;
}
