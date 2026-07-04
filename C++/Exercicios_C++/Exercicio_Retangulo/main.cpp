#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    double altura, comprimento, perimetro, area, diagonal;

    cout << "Digite a altura do retangulo: " << endl;
    cin >> altura;
    cout << "Digite o comprimento do retangulo: " << endl;
    cin >> comprimento;

    area = altura * comprimento;
    perimetro = 2 * (altura + comprimento);
    diagonal = sqrt((altura * altura) + (comprimento * comprimento));

    cout << fixed << setprecision(2);
    cout << "area do retangulo: " << area << endl;
    cout << "perimetro do retangulo: " << perimetro << endl;
    cout << "diagonal do retangulo: " << diagonal << endl;


    return 0;
}
