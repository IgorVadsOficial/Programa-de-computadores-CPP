#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Digite um numero: ";
    cin >> n;

    if (n < 0)
    {
        cout << "O seu valor (negativo): " << n * -1 << endl;
    }
    else
    {
        cout << "O seu valor: " << n << endl;
    }

    return 0;
}