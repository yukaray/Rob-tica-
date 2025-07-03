#include <iostream>
#include <locale.h>


int main(){
    using namespace std;
    setlocale(LC_ALL,"Portuguese");
    
    int x=15;
    int* o = &x;
    int y=20;
    int* p = &y;
    
    cout << "O valor de x e y, respetivamente: " << x << "," << y << endl;
    
    *o = 30;
    *p = 40;
    
    cout << "O valor de x e y, respetivamente: " << x << "," << y << endl;
    
}
