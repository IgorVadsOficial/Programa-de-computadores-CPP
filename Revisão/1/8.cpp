#include <iostream>
using namespace std;

int main()
{
    double n1, n2, n3, media = 0;

    cout << "NOTA 1: ";
    cin >> n1;

    cout << "NOTA 2: " ;
    cin >> n2;

    cout << "NOTA 3: ";
    cin >> n3;

    media = (n1 + n2 + n3) / 3;

    cout << "Sua media foi: " << media;

    return 0;
}