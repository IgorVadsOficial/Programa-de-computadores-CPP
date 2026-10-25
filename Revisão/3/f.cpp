#include <iostream>
using namespace std;

int main()
{
    int a, b, c, t;

    cout << "A: ";
    cin >> a;

    cout << "B: ";
    cin >> b;

    cout << "C: ";
    cin >> c;

    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (a > c)
    {
        t = a;
        a = c;
        c = t;
    }
    if (b > c)
    {
        t = b;
        b = c;
        c = t;
    }

    cout << "Valores em ordem crescente: " << a << " " << b << " " << c << endl;

    return 0;
}