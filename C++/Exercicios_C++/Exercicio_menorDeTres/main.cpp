#include <iostream>

using namespace std;

int main()
{
    int a, b, c, menor;

    cout << "digite 3 valores: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if ((a < b) && (a < c)) {
        menor = a;
    } else if ((b < a) && (b < c)) {
        menor = b;
    } else {
        menor = c;
    }

    cout << " o menor = " << menor << endl;

    return 0;
}
