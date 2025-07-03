#include <iostream>
#include <locale.h>
#include <cstring>

using namespace std;


double menu(){
    setlocale(LC_ALL, "Portuguese");

    char funcao[50];

    cout << "Qual função voçê quer? soma,mult,div ou sub: " << endl;
    cin.getline(funcao, 50);

    switch (funcao[50]){
        case(strcmp(funcao, "soma") == 0 || strcmp(funcao, "Soma") == 0):
            {
                double a, b;
                cout << "Digite o primeiro número: ";
                cin >> a;
                cout << "Digite o segundo número: ";
                cin >> b;
                cout << "Resultado da soma: " << a + b << endl;
            }
            break;

        case (strcmp(funcao, "mult") == 0 || strcmp(funcao, "multiplicação") == 0 || strcmp(funcao, "Mult") == 0 || strcmp(funcao, "Multiplicação") == 0  ):
            {
                double a, b;
                cout << "Digite o primeiro número: ";
                cin >> a;
                cout << "Digite o segundo número: ";
                cin >> b;
                cout << "Resultado da multiplicação: " << a * b << endl;
            }
            break;
        
        case (strcmp(funcao, "div") == 0 || strcmp(funcao, "divisão") == 0 || strcmp(funcao, "Div") == 0 || strcmp(funcao, "Divisão") == 0 )
            {
                double a, b;
                cout << "Digite o primeiro número: ";
                cin >> a;
                cout << "Digite o segundo número: ";
                cin >> b;

                cout << "Resultado da divisão: " << a / b << endl;

            }
            break;

        case (strcmp(funcao, "sub") == 0 || strcmp(funcao, "Sub") == 0 || strcmp(funcao, "subtração") == 0 || strcmp(funcao, "Subtração") == 0 )
            {
                double a, b;
                cout << "Digite o primeiro número: ";
                cin >> a;
                cout << "Digite o segundo número: ";
                cin >> b;
                cout << "Resultado da subtração: " << a - b << endl;
            }
    }

}

int main() {

    menu();

}