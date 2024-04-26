#include<iostream>
using namespace std;
class employee{
    float experience;
    public:
    employee(){
        experience=0;  
    }
     employee(int a,int b){
           experience=a+(b/12.0);
        }
    operator float(){   
    
        return experience;
    }
    
};
int main(){
    int year,month;
    float c;
    cout<<"Enter your experince in year"<<endl;
    cin>>year;
    cout<<"Enter your experince in month"<<endl;
    cin>>month;
    employee e1(year,month);
    c=e1;
    cout<<"Employee Experince is "<<c<<endl;
}