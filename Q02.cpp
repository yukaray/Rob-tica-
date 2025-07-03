#include <iostream>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int n1,n2;
    
    std::cout << "Digite um número: " << std::endl;
    std::cin >> n1;
    std::cout << "Digite outro número: " << std::endl;
    std::cin >> n2;
    
    int soma = n1+n2;
    int sub = n1-n2;
    int mult = n1*n2;
    int div = n1/n2;
    
    std::cout << "A soma: " << soma << std::endl;
    std::cout << "A subtração: " << sub << std::endl;
    std::cout << "A multiplicação: " << mult << std::endl;
    std::cout << "A divisão: " << div << std::endl;

}