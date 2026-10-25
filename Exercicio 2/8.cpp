#include <iostream>
using namespace std;

int main()
{

    int a, b, temp;

    cout << "Digite A: ";
    cin >> a;

    cout << "Digite B: ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "A = " << a << " B = " << b << endl;

    return 0;
}