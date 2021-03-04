//mayor que y menor que
#include <iostream>
using namespace std;
void mayor_menor(int a, int b);

int main(){
int a,b;
cout<< "escriba el primer valor 'a':" <<endl;
cin>> a;
cout<< "escriba el segundo valor 'b' :" <<endl;
cin>> b;
mayor_menor(a,b);
return 0;
}

void mayor_menor(int a, int b){
    if(a>b){cout<< "A es mayor"<<endl;}
    else if(a<b){cout<< "B es mayor"<<endl;}
    else
        cout<<"son iguales"<<endl;
}
