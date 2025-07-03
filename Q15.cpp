#include <iostream>
#include <iomanip>
#include <locale.h>
#include <math.h>

int main(){
    using namespace std;
    setlocale(LC_ALL,"Portuguese");
    
   int n;
   
   cout << "Digite sua nota" << endl;
   cin >> n;
   
   if(n<0||n>10){
   
       cout << "Digite uma nota válida " << endl;
   
   }else if(n>=7){
       
       cout << "Você foi aprovado"<< endl;
       
   }else {
       
       cout << "Você foi reprovado"<< endl;
       
   }

}