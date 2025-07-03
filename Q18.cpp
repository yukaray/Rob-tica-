#include <iostream>
#include <locale.h>

void incrementar(int* a) {
    (*a)++; 
}

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    using namespace std;

    int a;

    cout << "Digite um número: " << endl;
    cin >> a;

    int *p = &a;
    
    cout << "Antes da troca: " << endl;
    cout << "a: " << a << endl;

    incrementar(p);

    cout << "Depois da troca: " << endl;
    cout << "a: " << a << endl;


}