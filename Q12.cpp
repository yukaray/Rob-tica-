#include <iostream>
#include <locale.h>

int dobrou(int a);

int main(){
    using namespace std;
    setlocale(LC_ALL,"Portuguese");
    
    int x;
    int* o = &x;
    
    cout << "Digite um número: " << endl;
    cin >> x;
    cout << "o dobro é: "<< dobrou(*o) << endl;
    
    
}

int dobrou(int a){
    
    int dobro = a*2;
    
    return dobro;
    
}