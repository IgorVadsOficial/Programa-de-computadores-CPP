#include <iostream>
using namespace std;

int main()
{

    int a, b;

    cout << "Digite A: " << endl;
    cin >> a;

    cout << "Digite B: " << endl;
    cin >> b;

    if (a > b)
    {
        cout << "Diferenca entre: A e B = " << a - b << endl;
    }
    else if (b > a)
    {
        cout << "Diferenca entre: A e B = " << b - a << endl;
    }
    else if (a == b)
    {
        cout << "Os dois numeros sao iguais, diferenca de 0." << endl;
    }
    
    

    return 0;
}