#include <iostream>
#include <iomanip>
#include <climits>
#include <string>

using namespace std;

int main()
{
    int x;

    cout << "Digite um valor: " << endl;
    cin >> x;

    if (x > 5) {
        cout << "x e maior que 5." << endl;
    } else {
        cout << "x nao e maior que 5." << endl;
    }

    return 0;
}
