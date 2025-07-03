#include <iostream>
#include <locale.h>

float maior(float a, float b);

int main(){
    using namespace std;
    setlocale(LC_ALL,"Portuguese");
    
    float n1,n2;
    
    cout << "Digite um número" << endl;
    cin >> n1;
    cout << "Digite outro número" << endl;
    cin >> n2;
    
    cout << "O maior deles é: " << maior(n1,n2) << endl;
    
    
}

float maior(float a, float b){

    float m = b;
    
    if(a>b){
        
        m = a;
        
    }
     
    
    return m;

}