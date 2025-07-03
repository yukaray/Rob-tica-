#include <iostream>
#include <locale.h>

float maior(float a, float b);

int main(){
    using namespace std;
    setlocale(LC_ALL,"Portuguese");
    
    int x = 10;
    int* o = &x;
    
    cout << "o valor é da variavel apontada: "<< *o << endl;
    cout << "o valor é do ponteiro: "<< o << endl;
    
}