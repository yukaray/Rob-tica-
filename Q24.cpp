#include <iostream>
#include <locale.h>


int mediv(int *a){
        
    int soma = 0;  
    for (int i = 0; i < 10; i++) {
       soma += a[i];
    }
    int media = soma / 10;

    return media;

    }

int main() {
    using namespace std;
    setlocale(LC_ALL, "Portuguese");

    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p = vetor;

    cout << "A média do vetor: " << mediv(p) << endl;   
}