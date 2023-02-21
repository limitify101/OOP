#include<iostream>
using namespace std;
class Book{
    int bookNo;
    char bookTitle[20];
    float price;
    float TotalCost(int N){
        return(price*N);
    }
    public:
        void input(){
            cout<<"Enter book number: ";
            cin>>bookNo;
            cout<<"Enter book title: ";
            cin>>bookTitle;
            cout<<"Enter book price: ";
            cin>>price;
        }
        void purchase(){
            int num;
            cout<<"Enter number of copies to purchase: ";
            cin>>num;
            float cost = TotalCost(num);
            cout<<"Total Cost: "<<cost<<endl;
        }
};
int main(){
    Book book;
    book.input();
    book.purchase();
    return 0;
}