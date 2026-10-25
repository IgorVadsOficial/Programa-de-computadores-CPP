#include <iostream>
using namespace std;

int main()
{

    double altura, area, base, perimetro;

    cout << "Digite a altura: ";
    cin >> altura;
    
    cout << "Digite a base: ";
    cin >> base;

    perimetro = 2 * (base + altura);

    cout << "Perimetro = " << perimetro << endl; 
    return 0;
}