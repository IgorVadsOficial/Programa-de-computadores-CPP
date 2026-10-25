#include <iostream>

int main() {

    int N;
    std::cout << "Digite o valor: ";
        std::cin >> N;

    if (N >= 0) { std::cout << "O valor eh maior ou igual a zero." << std::endl;} 
    else {std::cout << "Numero negativo multiplicado por -1: " << N * -1 << std::endl;}

    return 0;}
