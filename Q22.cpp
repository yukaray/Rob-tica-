#include <iostream>
#include <locale.h>
#define Bonus 1000.15

int main() {
    using namespace std;
    setlocale(LC_ALL, "Portuguese");

    double salario,salarioFinal;

    cout << "Digite o valor do salário: ";
    cin >> salario;
    
    salarioFinal = salario + Bonus;

    cout << "O salário final é: " << salarioFinal << endl;
    cout << "O bônus foi: " << Bonus << endl;


}