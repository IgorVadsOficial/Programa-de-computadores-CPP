#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float A, B, C, delta, X, X1, X2;

    cout << "Digite o valor de A = " << endl;
        cin >> A;

    cout << "Digite o valor de B = " << endl;
        cin >> B;

    cout << "Digite o valor de C = " << endl;
        cin >> C;

    if (A == 0 || B == 0 || C == 0) {
        cout << "Nao eh equacao do 2 grau" << endl;
        return 0;
    }

    delta = (B * B) - (4 * A * C);

    if (delta < 0) {
        cout << "Nao ha solucao real" << endl;
    }
    else if (delta == 0) {
        X = -B / (2 * A);
        cout << "A unica solucao eh: " << X << endl;
    }
    else {
        X1 = (-B + sqrt(delta)) / (2 * A);
        X2 = (-B - sqrt(delta)) / (2 * A);
        cout << "As solucoes sao: " << X1 << " e " << X2 << endl;
    }

    return 0;
}