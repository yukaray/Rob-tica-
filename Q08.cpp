#include <iostream>
#include <locale.h>
#include <string>

char* mostraMensagem();

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    char* mensagem = mostraMensagem();
    
    cout << mensagem << endl;
}

char* mostraMensagem(){
    
    static char saudacao[20] = "Bom dia!";
    
    return saudacao;
    
}