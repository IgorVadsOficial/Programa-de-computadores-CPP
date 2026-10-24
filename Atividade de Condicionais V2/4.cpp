#include <iostream>
using namespace std;

int main () {
    
    float a, b, c;

    cout << "Escreva o primeiro lado: " << endl;
        cin >> a;
    cout << "Escreva o segundo lado: " << endl;
        cin >> b;
    cout << "Escreva o terceiro lado: " << endl;
        cin >> c;

if (a + b > c && a + c > b && b + c > a)
{
    if (a == b && b == c)
    {cout << "Esse triangulo eh Equilatero" << endl;}
    else if (a == b || b == c || c == a)
    {cout << "Esse triangulo eh Isosceles" << endl;}
    else {cout << "Esse triangulo eh Escaleno" << endl;}
}
else
{cout << "Nao forma um triangulo" << endl;}
    
    return 0;}



