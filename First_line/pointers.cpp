#include <iostream>
#include <cmath>

using namespace std;
int main(){

    /*int a=23;
    int *p;
    p=&a;
    cout <<"Address for P is: "<<p<<"\n"; //deferencing
    cout << "Value of P is "<<*p<<"\n"; 
    int b=20;
    *p=b;
    cout << "Address of P is: "<<p<<"\n";//
    cout <<"Value of P is: "<<*p<<"\n";
    int c=82;
    *p=c;
    cout << "Address of P is: "<<p<<"\n";//
    cout <<"Value of P is: "<<*p;
    return 0;*/

//--------------   Pointer Arethmatic  ---------
    int a=2002;
    int *p;
    p=&a;
    cout <<"Address of A is: "<<p<<"\n";
    p++;
    cout <<"Pointer +1= "<<*p;

    
}