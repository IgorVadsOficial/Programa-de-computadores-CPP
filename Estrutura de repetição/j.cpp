#include <iostream>
using namespace std;

int main () {

float f = 0;
for (int i = 10; i <= 100; i += 10)
{
    cout << i << " Celcius " << endl;
}

cout << "--------------" << endl;

for (int x = 10; x <= 100; x+= 10)
{
    f = (9.0/5.0) * x + 32;
    cout << f << " Fahrenheit " << endl;
}

    return 0;}