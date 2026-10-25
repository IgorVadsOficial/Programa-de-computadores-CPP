#include <iostream>
#include <cmath>
using namespace std;

int main() {

    const double pi = 3.14159;
    double raio;

    cout << "Raio: ";
    cin >> raio;

    cout << "Volume da esfera = " << 4.0/3.0 * pi * pow(raio,3) << endl;

return 0;}