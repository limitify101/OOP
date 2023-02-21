#include<iostream>
using namespace std;
class sum{
    int x,y;
    public:
        sum(int a,int b){
            x = a;
            y = b;
        }
        sum(sum &a){
            x = a.x*3;
            y = a.y*3;
        }
        ~sum(){
            cout<<x<<"+"<<y<<"="<<x+y<<endl;
        }
};
int main(){
    sum add(2,3);
    sum add2(add);
}