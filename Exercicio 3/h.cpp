#include <iostream>

int main() {

    int A,B,C,D;

    std::cout << "Digite o primeiro valor: ";
        std::cin >> A;
    std::cout << "Digite o segundo valor: ";
        std::cin >> B;
    std::cout << "Digite o terceiro valor: ";
        std::cin >> C;
    std::cout << "Digite o quarto valor: ";
        std::cin >> D;


    if (A % 2 == 0 && A % 3 == 0) 
	{std::cout << "1° numero eh divisivel por 2 e 3" << std::endl;}   
		else {std::cout << "1° numero nao eh divisivel por 2 e 3" << std::endl;	}
	
	if (B % 2 == 0 && B % 3 == 0) 
	{std::cout << "2° numero eh divisivel por 2 e 3" << std::endl;}   
		else {std::cout << "2° numero nao eh divisivel por 2 e 3" << std::endl;}
	
	if (C % 2 == 0 && C % 3 == 0) 
	{std::cout << "3° numero eh divisivel por 2 e 3" << std::endl;}   
		else {std::cout << "3° numero nao eh divisivel por 2 e 3" << std::endl;	}
	
	if (D % 2 == 0 && D % 3 == 0) 
	{std::cout << "4° numero eh divisivel por 2 e 3" << std::endl;}   
		else {std::cout << "4° numero nao eh divisivel por 2 e 3" << std::endl;}
		
		return 0;}
