#include <iostream>

int main() {

    int A,B,C,D,E,Maior,Menor;

    std::cout << "Digite o primeiro valor: ";
        std::cin >> A;

    std::cout << "Digite o segundo valor: ";
        std::cin >> B;

    std::cout << "Digite o terceiro valor: ";
        std::cin >> C;

    std::cout << "Digite o quarto valor: ";
        std::cin >> D;

    std::cout << "Digite o quinto valor: ";
        std::cin >> E;

Maior = A;
Menor = A;

if (B > Maior) {Maior = B;}
if (B < Menor) {Menor = B;}

if (C > Maior){Maior = C;}
if (C < Menor){Menor = C;}

if (D > Maior){Maior = D;}
if (D < Menor){Menor = D;}

if (E > Maior){Maior = E;}
if (E < Menor){Menor = E;}

std::cout << "O maior numero eh: " << Maior << std::endl;
std::cout << "O menor numero eh: " << Menor << std::endl;

return 0;}
