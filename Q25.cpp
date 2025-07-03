#include <iostream>
#include <locale.h>

double inverter(double& a){

   return a = a * -1;

}

int main() {

    using namespace std;
    setlocale(LC_ALL, "Portuguese");

    double x;

    cout << "Digite um número: ";
    cin >> x;
    

    cout << "O número invertido é: " << inverter(x) << endl;
    

}