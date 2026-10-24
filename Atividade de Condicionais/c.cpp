#include <iostream>

int main () {


    float N1, N2, N3, N4, MD;

    std::cout << "Digite a primeira nota: ";
        std::cin >> N1;

    std::cout << "Digite a segunda nota: ";
        std::cin >> N2;

    std::cout << "Digite a terceira nota: ";
        std::cin >> N3;
    
    std::cout << "Digite a quarta nota: ";
        std::cin >> N4;

    MD = (N1 + N2 + N3 + N4) / 4;

    if (MD >= 5) {
        std::cout << "Aprovado com media: " << MD << std::endl;
    } else {
        std::cout << "Reprovado com media: " << MD << std::endl;
    }

    return 0;
}