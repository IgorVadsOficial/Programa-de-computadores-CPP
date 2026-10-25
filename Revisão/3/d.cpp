#include <iostream>
using namespace std;

int main()
{

    double n1, n2, n3, n4, md1, md2, ne;

    cout << "NOTA 1: ";
    cin >> n1;

    cout << "NOTA 2: ";
    cin >> n2;

    cout << "NOTA 3: ";
    cin >> n3;

    cout << "NOTA 4: ";
    cin >> n4;

    md1 = (n1 + n2 + n3 + n4) / 4;

    if (md1 >= 7)
    {
        cout << "Aprovado!" << endl;
        cout << "Media obtida: " << md1 << endl;
    }
    else
    {
        cout << "Media obtida: " << md1 << endl;
        cout << "NOTA DO EXAME FINAL: ";
        cin >> ne;
        md2 = (md1 + ne) / 2;

        if (md2 >= 5)
        {
            cout << "APROVADO EM EXAME!" << endl;
            cout << "Media obtida com o exame: " << md2 << endl;
        }
        else if (md2 < 5)
        {
            cout << "REPROVADO EM EXAME!" << endl;
            cout << "Media obtida com o exame: " << md2 << endl;
        }
    }

    return 0;
}