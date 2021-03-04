//factorial cureño
#include <iostream>
using namespace std;
int factorial(int a);

int main(){
int b;
cout<< "introdusca el valor del numero:" <<endl;
cin>> b;
int fact=factorial(b);
cout<< "el resultado de el numero es :" <<fact<<endl;


return 0;
}

int factorial(int a){
    int i;
    int resultado=1;
    for (i=1;i<=a; i++){
        resultado *=i;
    }
    return resultado;
    }

