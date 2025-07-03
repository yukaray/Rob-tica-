#include <iostream>
#include <iomanip>
#include <locale.h>
#include <math.h>

int main(){
    using namespace std;
    setlocale(LC_ALL,"Portuguese");
    
   int idd;
   char nm[20];
   
   cout << "Digite seu nome" << endl;
   cin.getline (nm, 20);
   cout << "Digite sua idade" << endl;
   cin >> idd;
   
   if((idd> 16 && idd<18) || idd>65){
   
       cout << "Olá " << nm << ", você vota se quiser, pois tem " << idd << endl;
   
   }else if(idd>18 && idd<65){
       
       cout << "Olá " << nm << ", você pode votar, pois tem " << idd << endl;
       
   }else {
       
       cout << "Olá " << nm << ", você não pode votar, pois tem " << idd << endl;  
   
   }

}