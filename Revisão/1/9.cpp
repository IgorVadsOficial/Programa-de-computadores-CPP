#include <iostream>
using namespace std;

int main()
{

    double horas;

    cout << "Digite hora: ";
    cin >> horas;

    cout << "Minutos = " << horas * 60 << endl;
    cout << "Segundos = " << horas * 3600 << endl;

    return 0;
}