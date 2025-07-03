#include <iostream>
#include <locale.h>

using namespace std;
int vetor();

int main(){
    
    setlocale(LC_ALL,"Portuguese");
    
    vetor();
    
}

int vetor(){
    
    int a[5]= {10,15,20,25,30};
    int* o = a;
    
    cout << "Os elementos do vetor são:" << endl;
    for(int i =0;i<5;i++){
        
        cout << o[i] << endl;
        
    }
    
}

