#include <iostream>
#include <cmath>
using namespace std;

class Abstract{
    virtual void askforpromotion()=0;

};

class Employee:Abstract{
    public:
        string Name;
        string Company;
        int Age;
    
    Employee(string aname,string acompany,int aage){
                Name=aname;
                Company=acompany;
                isold(aage);
                
            }
    void introyourself(){
        cout << "Hi I'm "<<Name<<" I'm work From "<<Company<<" I'm "<<Age<<" years Old\n";
        
    }
    void isold(int aage){
        Age=aage;
        int wait=21-Age;
        if(aage>=21){
            cout <<Name<<" Yes your available to work here "<<Name<<endl;
        }else{
            cout <<Name<<" You need to wait a "<<wait<<
            " years and come back"<<endl;
        }
        
    }
    void askforpromotion(){
        if(Age>=30){
            cout <<Name<<" Get promoted"<<endl;
        }else{
            cout <<Name<<" Sorry No promotion for you\n";
        }
    }

};
class Developer:Employee{
    public:
        string favorite_language;
        string speciefic_framework;
        int expercience;
    void introduteyour(){
        cout <<" Hi I'm "<<Name<<" My favorite language is "<<favorite_language;
    }

};
int main(){
    
    Employee employee1("michel jakson","Google",34);
    Employee employee("Ayoub Ed","IBM",25);
    //employee1.introyourself();
    //Employee employee2("brahim boughanm","Sigma",19);
    //employee3.introyourself();
    //employee2.isold();
    Developer dev1;
    
    return 0;
}