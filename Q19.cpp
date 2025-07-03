#include <iostream>
#include <locale.h>

#include <iostream>
#include <iomanip>
#include <locale.h>
#include <math.h>

float calculaMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

int main(){
    using namespace std;
    setlocale(LC_ALL,"Portuguese");
    
   float n1,n2,n3,media;
   
   cout << "Digite a 1º nota" << endl;
   cin >> n1;
    cout << "Digite a 2º nota" << endl;
    cin >> n2;
    cout << "Digite a 3º nota" << endl;
    cin >> n3;

    media = calculaMedia(n1, n2, n3);
    
   
   if(media<0||media>10){
   
       cout << "Digite uma nota válida " << endl;
   
   }else if(media>=7){
       
       cout << "Você foi aprovado"<< endl;
       
   }else {
       
       cout << "Você foi reprovado"<< endl;
       
   }

}