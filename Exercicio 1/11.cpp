#include <iostream>
using namespace std;
#include <cmath>

int main()
{

    const double pi = 3.14159;
    double r, area;

    cout << "Raio: ";
    cin >> r;

    area = pow(r, 2) * pi;

    cout << "Area = " << area << endl;

    return 0;
}