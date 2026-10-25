#include <iostream>
using namespace std;

int main()
{

    double n1, n2, n3, n4, MD;

    cout << "NOTA 1 = " << endl;
    cin >> n1;

    cout << "NOTA 2 = " << endl;
    cin >> n2;

    cout << "NOTA 3 = " << endl;
    cin >> n3;

    cout << "NOTA 4 = " << endl;
    cin >> n4;

    MD = (n1 + n2 + n3 + n4) / 4;

    if (MD >= 5.0)
    {
        cout << "Aprovado!" << endl;
        cout << MD << endl;
    }
    else
    {
        cout << "Reprovado!" << endl;
        cout << MD << endl;
    }

    return 0;
}