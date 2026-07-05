#include <iostream>

using namespace std;

int main()
{
    int x, i, idade, contador;
    double altura, alturaMedia, somaAltura, porcentagemIdade;
    string nome;

    cout << "Quantas pessoas serao digitadas: " << endl;
    cin >> x;

    string nomes[x];

    somaAltura = 0;
    for (i = 0; i < x; i++) {
        cout << "\nDados da pessoa " << i+1 << ": " << endl;
        cout << "nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome);
        cout << "idade: ";
        cin >> idade;
        cout << "Altura: ";
        cin >> altura;

        somaAltura = somaAltura + altura;

        if (idade < 16) {
            nomes[i] = nome;
            contador = contador + 1
        }
    }

    alturaMedia = somaAltura / x;
    porcentagemIdade = (contador / x) * 100;

    for (i = 0; i < x; i++) {

    }

    return 0;
}
