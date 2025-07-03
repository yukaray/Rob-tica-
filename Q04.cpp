#include <iostream>
#include <iomanip>
#include <locale.h>
#include <math.h>

int main(){
    using namespace std;
    setlocale(LC_ALL,"Portuguese");
    
    int inte = M_PI * pow(4,2);
    float decimal7m = M_PI * pow(4,2);
    double decimal7M = M_PI * pow(4,2);
   
    cout << "inteiro só recebe números do conjunto dos inteiros: " << inte << "\n" << endl;
    cout << "o float tem capacidade de colocar números décimais que tenhão até 7 casa décimais, com precisão: " << setprecision(7) << decimal7m  << "\n" << endl;
    cout << "o double tem capacidade de colocar números décimais que tenhão até 15 casa décimais, com precisão: " << setprecision(15) << decimal7M  << "\n" << endl;
    
    

}