#include  <iostream>
#include <locale.h>

void troca(int &a, int &b) {
    

    int troca = a;
    a = b;
    b = troca;
}

int main() {
   
    using namespace std;

    int a, b;

    cout << "Digite um número: " << endl;
    cin >> a;

    cout << "Digite outro número: " << endl;
    cin >> b;

    cout << "Antes da troca: " << endl;
    cout << "a: " << a << ", b: " << b << endl;

    troca(a, b);

    cout << "Depois da troca: " << endl;
    cout << "a: " << a << ", b: " << b << endl;


}