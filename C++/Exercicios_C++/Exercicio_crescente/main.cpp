#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int a, b;

    cout << "Digite dois valores: " << endl;
    cin >> a;
    cin >> b;

    if (a > b) {
        cout << "\nDecrecente" << endl;
    } else {
        cout << "\ncrescente"<< endl;
    }

    return 0;
}
