#include <iostream>
using namespace std;

int main() {
    int dividendo, divisor;
    int quociente = 0;

    cout << "Digite o dividendo: ";
    cin >> dividendo;

    cout << "Digite o divisor: ";
    cin >> divisor;

    if (divisor == 0) {
        cout << "Erro: divisao por zero!" << endl;
        return 0;
    }

    for (;dividendo >= divisor; quociente++) {
        dividendo = dividendo - divisor;
    }

    cout << "Quociente inteiro: " << quociente << endl;

    return 0;
}