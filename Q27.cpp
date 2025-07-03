#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

void deposito(double &saldo){

setlocale(LC_ALL, "Portuguese");  
  
double depo;  
  
cout << "Quanto quer depositar?" << endl;  
cin >> depo;
cin.ignore();  
  
cout << "Foi depositado R$" << depo << " com sucesso\n\n" << endl;

saldo+=depo; 

}

void saque(double &saldo){

setlocale(LC_ALL, "Portuguese");  
  
double saq;  
  
cout << "Quer sacar quanto?" << endl;  
cin >> saq;
cin.ignore();
  
cout << "Foi descontado R$" << saq << " com sucesso\n\n" << endl;

saldo-=saq;

}

void consultar(double saldo){

setlocale(LC_ALL, "Portuguese");  
  
cout << "Seu saldo é de "  << saldo << "\n\n" << endl;

}

int main() {

double saldo = 5650;  
  
char funcao[50];  
  
  
do{  
      
    cout << "Quer?\nsacar\ndepositar\nconsultar o saldo\n\n" << endl;  
    cin.getline(funcao, 50);  
  
    cout << "\n\n" << endl;



    if(strcasecmp(funcao, "sacar") == 0 ){

              
            saque(saldo);

 
    }else if(strcasecmp(funcao, "depositar") == 0 ){

              
            deposito(saldo);  
              
    }else if(strcasecmp(funcao, "consultar") == 0 || strcasecmp(funcao, "consultar o saldo") == 0){

             
            consultar(saldo);  
            

    }  
      
}while(strcasecmp(funcao,"parar") != 0);

}

