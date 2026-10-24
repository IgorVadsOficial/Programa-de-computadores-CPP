#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main () {

double y;

cout << "Digite a Raiz: ";
    cin >> y;

double x1 = y / 2;
double xi = x1;
double xi1 = 0;
double r1, rf;


while (true)
{
    
xi1 = xi - (pow(xi, 2) - y) / (2 * xi);

if (fabs(xi1 - xi) < 0.1)
{

r1 = sqrt (y);
rf = fabs(xi1 - r1);

    cout << "Raiz aproximada (Newton): " << xi1 << endl;
    cout << "Raiz exata (sqrt): " << r1 << endl;
    cout << "Erro final (RF): " << rf << endl;
    return 0;}

xi = xi1;}

return 0;}
