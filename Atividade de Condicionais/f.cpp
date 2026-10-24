#include <iostream>
using namespace std;

int main () {
    
    int A, B, C, temp;

    std::cout << "Digite o valor de A = " << std::endl;
        std::cin >> A;

    std::cout << "Digite o valor de B = " << std::endl;
        std::cin >> B;
    
    std::cout << "Digite o valor de C = " << std::endl;
        std::cin >> C;
    
    if (A > B) {
        temp = A;
        A = B;
        B = temp;
    }

    if (A > C) {
        temp = A;
        A = C;
        C = temp;
    }

    if (B > C) {
        temp = B;
        B = C;
        C = temp;
    }

    std::cout << "Ordem crescente: " << A << ", " << B << ", " << C << std::endl;
    return 0;}