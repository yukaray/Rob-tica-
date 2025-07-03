#include <iostream>
#include <locale.h>
#include <string>

int ePar(int a);

int main(){
    using namespace std;
    setlocale(LC_ALL,"Portuguese");
    
    int n;
    
    cout << "digite um número: " << endl;
    cin >> n;
    
    if(ePar(n) == true){
    
        cout << "O " << n << " é par" << endl;
        
    }else{
        
        cout << "O " << n << " é ímpar" << endl;
        
    }
}

int ePar(int a){
    
    bool par = false;
    
    if((a%2)==0){
    
        par = true;
    
    }
    
    return par;
    
}