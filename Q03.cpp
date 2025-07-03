#include <iostream>
#include <locale.h>

double potencia(double base, double expoente);

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    const double Pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481117450284102701938521105559644622948954930381964428810975665933446128475648233786783165271201909145648566923460348610454326648213393607260249141273;
    
    float r;
    
    std::cout << "Digite o raio da circunferência" << std::endl;
    std::cin >> r;
    
    double area = Pi*potencia(r,2);
    
    std::cout << "A área é: " << area << std::endl;
    
    
    
}

double potencia(double base , double expoente){

    for(int i=2; i<=expoente; i++){
    
        base = base*base;
    
    }
    
    return base;

}