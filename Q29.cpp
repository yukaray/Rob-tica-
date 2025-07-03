#include <iostream>
#include <locale.h>
#include <string.h>
#include <iomanip>

using namespace std;



void leitor(int* a, float* b){
    
    *a = 2*(*b);
    *b = 4.32*(*a);
    
}


int main() {
    
    int a;
    float b;
    
    cout << "Digite um número: " << endl;
    cin >> a;
    cout << "Digite um número decimal: " << endl;
    cin >> b;
    
    int *p = &a;
    float *m = &b;
    
    cout << "antes da troca \n" << a << "\n" << b << endl;
    
    leitor(p,m);
    
    cout << "\n\ndepois da troca\n" << a << "\n"<< b << endl;
    
}