#include <iostream>

int main () {

    float N1, N2, N3, N4, MD1, MD2, NE;

    std::cout << "Digite a primeira nota: ";
        std::cin >> N1;

    std::cout << "Digite a segunda nota: ";
        std::cin >> N2;

    std::cout << "Digite a terceira nota: ";
        std::cin >> N3;
    
    std::cout << "Digite a quarta nota: ";
        std::cin >> N4;

    MD1 = (N1 + N2 + N3 + N4) / 4;

    if (MD1 >= 7) {
        std::cout << "Aprovado com media: " << MD1 << std::endl;
    } else {
        std::cout << "Digite a nota do Exame: " << std::endl;
            std::cin >> NE;
        MD2 = (MD1 + NE) / 2;
        if (MD2 >= 7) {
            std::cout << "Aprovado em Exame com media: " << MD2 << std::endl;
        } else {
            std::cout << "Reprovado em Exame com media: " << MD2 << std::endl;
        }
    }

    return 0;
}