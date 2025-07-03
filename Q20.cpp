#include <iostream>
#include <iomanip>
#include <locale.h>
#include <math.h>

void aprovado(char nm[50], float n) {
    using namespace std;
    setlocale(LC_ALL,"Portuguese");
  
    if(n<0||n>10){
   
       cout << nm << ", digite uma nota válida " << endl;
   
   }else if(n>=7){
       
       cout << nm << ", você foi aprovado"<< endl;
       
   }else {
       
       cout << nm << ", você foi reprovado"<< endl;
       
   }

}

int main(){
    using namespace std;
    setlocale(LC_ALL,"Portuguese");
    
   float n;
   char nm[50];
   
   cout << "Digite seu nome" << endl;
    cin.getline(nm, 50);
   cout << "Digite sua nota" << endl;
   cin >> n;

    aprovado(nm, n);
    
   
}