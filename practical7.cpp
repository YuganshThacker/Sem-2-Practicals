#include<iostream>
using namespace std;
class complex{
    public:
    float real;
    float imaginary;
    void setdata(){
        cout << "Enter Real Part : ";
        cin >> real;
        cout << "Enter Imaginary Part : ";
        cin >> imaginary;

    }
    void getdata(){
        cout << real << " + " << imaginary << "i" << endl;
    }
    void getdata2(){
        cout <<""<< real << " - " << imaginary << "i";
    }
    complex operator+(complex &n){
        complex temp ;
        temp.real = real + n.real;
        temp.imaginary = imaginary + n.imaginary;
        return temp;
    }
    complex operator-(complex &n){
        complex temp ;
        temp.real = real - n.real;
        temp.imaginary = imaginary - n.imaginary;
        return temp;
    }
    complex operator*(complex &n){
        complex temp ;
        temp.real = (real*n.real) - (imaginary*n.imaginary);
        temp.imaginary =  (imaginary * n.real) + (real*n.imaginary);
        return temp;
    }
    complex operator/(complex &n){
        complex temp ;
        temp.real = ((real*n.real) + (imaginary*n.imaginary))/((n.real*n.real)+(n.imaginary*n.imaginary));
        temp.imaginary =(imaginary * n.real)- (real*n.imaginary)/((n.real*n.real)+(n.imaginary*n.imaginary));
        return temp;
    }
    complex operator!(){
        complex temp ;
        temp.real = -real;
        temp.imaginary = -imaginary;
        return temp;
    }
};
int main(){
    complex a,b,c;
    a.setdata();
    b.setdata();
    cout << "Choose operation"<<endl;
    cout <<"("<<"+"<<")"<<"addition"<<endl;
    cout <<"("<<"-"<<")"<<"subtraction"<<endl;
    cout <<"("<<"*"<<")"<<"multiplication"<<endl;
    cout <<"("<<"/"<<")"<<"division"<<endl;
    cout <<"("<<"!"<<")"<<"negation"<<endl;
    cout <<"Enter your Choice : ";
    char symbol;
    cin >>symbol;
    switch(symbol){
        case '+':
         c = a + b;
         c.getdata();
         break;

         case '-':
         c = a - b;
         c.getdata();
         break;

         case '*':
         c = a * b;
         c.getdata();
         break;

         case '/':
         c = a / b;
         c.getdata();
         break;

         case '!':
         c=!a;
         c.getdata();
         c=!b;
         c.getdata();
         break;
    }

return 0;
}