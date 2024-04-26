#include<iostream>
#include<string.h>

using namespace std;

class product
{
protected :
    int product_id;
    string product_name;
    string product_manufacturer;
    float product_price;

public :
    
    product(int pid, string pname, string pmanu, float pprice)
    {
    product_id = pid;
    product_name = pname;
    product_manufacturer = pmanu;
    product_price = pprice;
    }
    virtual void putdata() = 0 ;
};

class smartwatch : protected product
{
protected :
    float dial_size;

public :
   
    smartwatch(int pid, string pname, string pmanu, float pprice, float dsize) : product(pid, pname, pmanu, pprice)
    {
    dial_size = dsize;
    }

    void putdata()
    {
    cout<<"-----------------------------------------------"<<endl;
    cout<<product_id<<" : "<<product_name<<" : "<<product_manufacturer<<" : "<<product_price<<" : "<<dial_size<<endl;
    cout<<"-----------------------------------------------"<<endl;
    }
};



class bedsheet : protected product
{
protected :
    float width;
    float height;

public :

   
    bedsheet(int pid, string pname, string pmanu, float pprice, float w, float h) : product(pid, pname, pmanu, pprice)
    {
    width = w;
    height = h;
    }

    void putdata()
    {
    cout<<"-----------------------------------------------"<<endl;
    cout<<product_id<<" : "<<product_name<<" : "<<product_manufacturer<<" : "<<product_price<<" : "<<width<<" : "<<height<<endl;
    cout<<"-----------------------------------------------"<<endl;
    }
};

int main()
{
    int pid;
    string pname, pmanu;
    float pprice, dsize, w, h;

    int choice;
L:
    cout<<"Enter 1 : smart watch menu\n";
    cout<<"Enter 2 : bedsheet menu\n";
    cout<<"Enter your choice : ";
    cin>>choice;

    switch(choice)
    {
       
    case 1 :
        {
            
        cout<<endl;
        cout<<"***** ENTER SMART WATCH DATA *****\n";
        cout<<endl<<"Enter product id : ";
        cin>>pid;
        fflush(stdin);
        cout<<"Enter product name : ";
        getline(cin,pname);
        cout<<"Enter product manufacturer : ";
        cin>>pmanu;
        fflush(stdin);
        cout<<"Enter product price : ";
        cin>>pprice;
        fflush(stdin);
        cout<<"Enter product dial size : ";
        cin>>dsize;
        fflush(stdin);

        smartwatch s(pid, pname, pmanu, pprice, dsize); 
        s.putdata();        
        break;
        }

      
    case 2 :
        {
            
        cout<<endl;
        cout<<"***** ENTER BEDSHEET DATA *****\n";
        cout<<endl<<"Enter product id : ";
        cin>>pid;
        fflush(stdin);
        cout<<"Enter product name : ";
        getline(cin,pname);
        cout<<"Enter product manufacturer : ";
        cin>>pmanu;
        fflush(stdin);
        cout<<"Enter product price : ";
        cin>>pprice;
        fflush(stdin);
        cout<<"Enter bedsheet width : ";
        cin>>w;
        fflush(stdin);
        cout<<"Enter bedsheet height : ";
        cin>>h;
        fflush(stdin);

        bedsheet b(pid, pname, pmanu, pprice, w, h);      
        b.putdata();       
        break;
        }

    default :
        cout<<"Invalid choice. Enter valid option\n";
        goto L;    
        break;
    }
    return 0;
}
