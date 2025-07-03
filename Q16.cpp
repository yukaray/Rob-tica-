#include <iostream>
#include <cmath>
#include <locale.h>

void troca(int &a, int &b) {

    a = a * sqrt(121);
    b=  b / sqrt(121);

    
    
}

int main() {
    using namespace std;
    setlocale(LC_ALL,"Portuguese");

    int a,b;

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