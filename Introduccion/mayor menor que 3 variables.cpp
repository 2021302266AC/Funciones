//mayor que y menor que 3 variables
#include <iostream>
using namespace std;
int mayor_menor(int a, int b);

int main(){
int a,b,c;
cout<< "escriba el primer valor 'a':" <<endl;
cin>> a;
cout<< "escriba el segundo valor 'b' :" <<endl;
cin>> b;
cout<< "escriba el tercer valor 'c':" <<endl;
cin>> c;
int mayor_menor1 = mayor_menor(a,b);
int mayor_menor2 = mayor_menor(mayor_menor1,c);
cout<< "el numero mayor es:"<<mayor_menor2<<endl;


mayor_menor(a,b);
return 0;
}

int mayor_menor(int a, int b){
    int d;
    if (a>b){d=a; }
    else{d=b; }
        return d;
}
