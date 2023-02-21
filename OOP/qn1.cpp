#include<iostream>
using namespace std;
class Rectangle{
    int len,wid;
    public:
        void set_values(int a,int b){
            len = a;
            wid = b;
        }
        int area(){
            return (len*wid);
        }
}rect;
int main(){
    int l,w;
    cout<<"Enter the length and width: ";
    cin>>l>>w;
    rect.set_values(l, w);
    int area = rect.area();
    cout<<"The area is : "<<area<<endl;

    return 0;
}