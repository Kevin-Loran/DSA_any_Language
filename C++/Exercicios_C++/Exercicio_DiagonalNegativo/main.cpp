#include <iostream>

using namespace std;

int main()
{
    int m, i, j, contador;

    cout << "Qual a ordem da matriz: ";
    cin >> m;

    int mat[m][m];

    contador = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
           cout << "Elemento [ " << i << ", " << j << "]: " ;
           cin >> mat[i][j];

           if (mat[i][j] < 0) {
                contador = contador + 1;
           }
        }
    }

    cout << "diagonal principal: " << endl;
    for (i = 0; i < m; i++) {
        cout << " "<< mat[i][i];
    }

    cout << "\nQuantidades de numeros negativos: " << contador << endl;
    return 0;
}
