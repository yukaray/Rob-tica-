#include <iostream>
#include <locale.h>

double Quadrado(double base);

int main(){
    using namespace std;
    setlocale(LC_ALL,"Portuguese");
    
    double n;
    
    cout << "Digite um número" << endl;
    cin >> n;
    
    cout << "O quadrado dele é: " << Quadrado(n) << endl;
    
    
}

double Quadrado(double base ){

    
     base = base*base;
    
    return base;

}