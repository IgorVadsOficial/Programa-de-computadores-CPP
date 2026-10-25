#include <iostream>
using namespace std;

int main () {

unsigned long long fatorial = 1;

for (int i = 1; i <= 15; i++)
{
    fatorial = fatorial * i;
}

cout << "Fatorial: " << fatorial << endl;

return 0;}