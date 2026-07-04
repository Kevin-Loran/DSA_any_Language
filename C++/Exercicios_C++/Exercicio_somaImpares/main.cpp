#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

int main()
{
    int a, b, c, soma, i;


    cout << "Digite dois numeros: " << endl;
    cin >> a;
    cin >> b;

    if (b > a) {
        c = b;
        b = a;
        a = c;
    }


    soma = 0;

    for (i = b; i < a; i++ ) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }


    cout << "soma dos impares = " << soma << endl;
    return 0;
}
