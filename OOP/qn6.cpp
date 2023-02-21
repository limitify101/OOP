#include<iostream>
using namespace std;
class Distance{
    int feet;
    float inches;
    public:
        void set(int a,float b){
            feet = a;
            inches = b;
            inches = (inches >= 12) ? 12:inches;
        }
        void disp(){
            cout<<"-------------------"<<endl;
            cout<<"Distance in feet: "<<feet<<endl;
            cout<<"Distance in inches: "<<inches<<endl;
        }
        Distance add(Distance &d){
            Distance dist;
            dist.feet = this->feet + d.feet;
            dist.inches = this->inches + d.inches;
            if(dist.inches >= 12){
                dist.feet++;
                dist.inches -= 12;
            }
            return dist;
        }
};
int main(){
    Distance d1,d2,d3;
    d1.set(2,5.4);
    d2.set(5,6.5);
    d3 = d1.add(d2);
    d1.disp();
    d2.disp();
    d3.disp();
    return 0;
}