#include <iostream>
using namespace std;

int main() {
    unsigned long long graos = 1;
    unsigned long long total = 0;

    for(int i = 1; i <= 64; i++) {
        total = total + graos;
        graos = graos * 2;
    }

    cout << "Total de graos: " << total << endl;

    return 0;
}