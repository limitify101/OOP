#include<bits/stdc++.h>
using namespace std;
class student{
    int admno;
    char sname[20];
    float eng,math,science,total;
    float ctotal(){
        return(eng+math+science);
    }
    public:
        void TakeData(int a,char b[],float c,float d,float e){
            admno = a;
            strcpy(sname,b);
            eng = c;
            math = d;
            science = e;
            total = ctotal();
        }
        void ShowData(){
            cout<<"Name: "<<sname<<endl;
            cout<<"Admission number: "<<admno<<endl;
            cout<<"Total Marks: "<<total<<endl;
        }
}st;
int main(){
    int a;
    float eng,math,sc;
    char name[20];
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter admission number: ";
    cin>>a;
    cout<<"Enter marks in (English,Math,Science): ";
    cin>>eng>>math>>sc;
    st.TakeData(a,name,eng,math,sc);
    st.ShowData();
    return 0;
}