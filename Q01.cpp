#include <iostream>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    short intp = 16;
    int inteiro = 32;
    long intg = 64;
    long long intG = 128;
    float decimal7m = 1.00000015;
    double decimal7M = 1.00000015;
    char carac = 'A';
    wchar_t carcEsp = L'$';
    unsigned char usig =  "manipulador"[30]; 
    
    std::cout << intp << " " << inteiro << " " << intg << " " << intG << " " << decimal7m << " " << decimal7M << " " << carac << " " << carcEsp << " " << usig << std::endl;
    
    
            
        
        
        
        

}