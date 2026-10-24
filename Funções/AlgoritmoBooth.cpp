#include <iostream>
using namespace std;

int main()
{
    int BR, QR;
    int AC = 0;
    int Qn1 = 0;
    int n;
    int SC;

    cout << "Digite o multiplicando (BR): ";
    cin >> BR;

    cout << "Digite o multiplicador (QR): ";
    cin >> QR;

    cout << "Digite o numero de bits: ";
    cin >> n;

    SC = n;

    while (SC > 0)
    {

        int Q0 = QR & 1;

        if (Q0 == 0 && Qn1 == 1)
        {
            AC = AC + BR;
        }
        else if (Q0 == 1 && Qn1 == 0)
        {
            AC = AC - BR;
        }

        int novoQn1 = QR & 1;
        int bitAC = AC & 1;
        QR = QR >> 1;

        if (bitAC)
            QR |= (1 << (n - 1));

        AC = AC >> 1;
        Qn1 = novoQn1;
        SC--;
    }

    cout << "\nResultado da multiplicacao (AC,QR): ";
    cout << ((long long)AC << n) + (unsigned int)QR << endl;

    return 0;
}