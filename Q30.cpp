#pragma once

#include <iostream>
#include <locale.h>
#include <string.h>
#include <iomanip>

using namespace std;

void valor(int a){
    
    a=a*6;
    
}

void ref(int &a){
    
    a=a*6;
    
}

void point(int* a){
    
    *a=(*a)*6;
    
}


int main() {
    
    int a,b,c;
    
    cout << "Digite um número: " << endl;
    cin >> a;
    cout << "Digite um outro número: " << endl;
    cin >> b;
    cout << "Digite outro número: " << endl;
    cin >> c;
    
    int *o=&c;
    
    cout << "\n\nantes da troca\npor valor: " << a << "\npor referência: "<< b << "\npor ponteiro: "<< c << endl;
   
    valor(a);
    ref(b);
    point(o);
    
    cout << "\n\ndepois da troca\npor valor: " << a << "\npor referência: "<< b << "\npor ponteiro: "<< c << endl;
    
}