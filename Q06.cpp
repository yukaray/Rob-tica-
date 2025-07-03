#include <iostream>
#include <locale.h>

int soma(int a,int b);

int main(){
    using namespace std;
    setlocale(LC_ALL,"Portuguese");
    
    int n1,n2;
    
    cout << "digite um número: " << endl;
    cin >> n1;
    cout << "digite outro número: " << endl;
    cin >> n2;
    
    cout << "A soma deles é: " << soma(n1,n2) << endl;
    
}

int soma(int a, int b){
    
    int s = a+b;
    
    return s;
    
}