#include <iostream>
#include <locale.h>

double calculaAreaRetangulo(double base, double altura) {
    return base * altura;
}

int main() {
    using namespace std;
    setlocale(LC_ALL, "Portuguese");

    double x,y;

    cout << "Digite o valor a área do retângulo: ";
    cin >> x;
    cout << "Digite o valor da altura do retângulo: "; 
    cin >> y;

    cout << "A área do retângulo é: " << calculaAreaRetangulo(x, y) << endl;

}