#include <iostream>
using namespace std;

int main()
{

    int segundos, horas, minutos;

    cout << "Digite os segundos: " << endl;
    cin >> segundos;

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;

    cout << "Horas: " << horas << " Minutos: " << minutos<< " Segundos: " << minutos % 60 << endl;
    return 0;
}