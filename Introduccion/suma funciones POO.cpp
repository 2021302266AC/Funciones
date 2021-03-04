//suma de funciones
#include <iostream>
using namespace std;
void suma(int a, int b);

int main(){
int a,b;
cout<< "escriba el primer numero a sumar:" <<endl;
cin>> a;
cout<< "escriba el segundo numero a sumar:" <<endl;
cin>> b;
suma(a,b);
return 0;
}

void suma(int a, int b){
int c= a + b;
cout<<"El resuldo de la suma es:"<<c<<endl;
}
