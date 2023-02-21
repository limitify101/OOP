#include<iostream>
using namespace std;
class A{
    public:
        int x;
};
class B{
    public:
        int y;
};
class C:public A{
    public:

};
int main(){
    C c;
    c.x = 4;
    cout<<c.x<<endl;
    return 0;
}