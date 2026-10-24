#include <iostream>

int main() {

    int a,b;
    std::cout << "Digite o primeiro valor: ";
        std::cin >> a;

    std::cout << "Digite o segundo valor: ";
        std::cin >> b;

    if (a > b)
    {std::cout << "O maior valor eh: " << a << std::endl;} 
        else {std::cout << "O maior valor eh: " << b << std::endl;}

        return 0;}