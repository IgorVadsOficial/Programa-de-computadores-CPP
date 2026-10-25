#include <iostream>
using namespace std;
#include <cmath>

int main()
{

    double a, b, c, delta, x1, x2, x;

    cout << "A: ";
    cin >> a;

    cout << "B: ";
    cin >> b;

    cout << "C: ";
    cin >> c;

    cout << endl;

    delta = (b * b) - (4 * a * c);
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    x = -b / (2 * a);

    if (delta < 0)
    {
        cout << "Nao ha solucao real!" << endl;
        cout << "Delta = " << delta << endl;
    }
    else if (delta > 0)
    {
        cout << "Ha duas solucao reais e diferentes!" << endl;
        cout << "Delta = " << delta << endl;
        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;
    }
    else if (delta == 0)
    {
        cout << "Ha apenas uma solucao real" << endl;
        cout << "Delta = " << delta << endl;
        cout << "X = " << x1 << endl;
    }

    return 0;
}