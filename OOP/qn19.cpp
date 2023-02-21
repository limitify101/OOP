#include<iostream>
using namespace std;
class BaseClass{
    int x;
    public:
        friend void show(BaseClass bc);
        BaseClass(int a){
            x = a;
        }
};
void show(BaseClass bc){
    cout<<bc.x<<endl;
}
int main(){
    BaseClass b(2);
    show(b);
    return 0;
}