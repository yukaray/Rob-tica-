#include <iostream>
#include <locale.h>
#include <string.h>
#include <iomanip>

using namespace std;

struct pessoa{
        
        char nome[50];
        double altura;
        int idd;
        
};

void leitor(pessoa* a){
    
    cout << "A(o) " << a->nome << "\ntem " << a->altura << " de altura\n" << "e tem " << a->idd << " de idade" << endl;
    
}


int main() {
    
    pessoa p;
    strcpy(p.nome, "yuka");
    p.altura = 1.87;
    p.idd = 17;
    
    leitor(&p);
    
}