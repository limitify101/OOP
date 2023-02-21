#include <cstdlib>
#include<iostream>
using namespace std;
class temperature{
    float degree;
    public:
        void cel_fahr(float cel){
            degree = (cel*9.0/5.0)+32;
            cout<<"Fahrenheit -> "<<degree<<endl;
        }
        void fahr_cel(float fahr){
            degree = (fahr - 32)*(5.0/9.0);
            cout<<"Celcius -> "<<degree<<endl;
        }
}Celcius;
int main(){
    float deg;
    int c;
    cout<<"Enter the temperature degrees: ";
    cin>>deg;
    cout<<"Convert to:\n1.C->F\t2.F->C"<<endl;
    cin>>c;
    if(c == 1){
        Celcius.cel_fahr(deg);
    }
    else if(c == 2){
        Celcius.fahr_cel(deg);
    }
    return 0;
}