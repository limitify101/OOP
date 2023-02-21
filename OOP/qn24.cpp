#include<iostream>
#include <ostream>
using namespace std;
class person{
    string firstName,LastName;
    int age;
    public:
        void getData(){
            cout<<"Enter first name: ";
            cin>>firstName;
            cout<<"Enter last name: ";
            cin>>LastName;
            cout<<"Enter age: ";
            cin>>age;
        }
        void putData(){
            cout<<"FirstName: "<<firstName<<endl;
            cout<<"LastName: "<<LastName<<endl;
            cout<<"Age: "<<age<<endl;
        }
};
int main(){
    person p;
    p.getData();
    p.putData();
    return 0;
}