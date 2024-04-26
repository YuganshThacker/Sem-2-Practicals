#include<iostream>
using namespace std;
class literature{
    private:
    int unique_id;
    string title;
    public:
    void getdata(){
       
        cout << "ID : ";
        cin >> unique_id;
        fflush(stdin);

        cout << "Title : ";
         getline(cin, title);
         fflush(stdin);

      
        /*
        cout << "(E)copy or (H)ardbound :";
        cin >>choice;

        switch(choice)
        {   case 1:
            ecopy="ecopy";
            break;
            case 2:
            hardbound="hardbound";
            break;
            default:
            exit;
        }


        cout << "-----------------------------------------------------------";*/
    }
    void putdata(){
        cout << unique_id<<endl;
        cout << title<<endl;
    }

};

class e_literature:  public virtual literature{
    private:
  string DOI;
    public:
  void getdata1()
  {
    
    cout << "DOI : ";
    cin >> DOI;
    fflush(stdin);
  }
  void putdata1(){
    
        cout << DOI<<endl;
    }
};

class Hardbound_literature:public virtual literature{
     private:
  int no_of_copies;
    
    public:
  void getdata2()
  { 
   
    cout << "In stock copies : ";
    cin >> no_of_copies;
    fflush(stdin);
    
  
  }
  void putdata2()
  {
    cout << no_of_copies<<endl;
  }
};

class book :public virtual literature,public  Hardbound_literature,public e_literature{
    private:
    int ISBN;
    char choice;
 
    public:
  void getdata3()
  {
    getdata();
    
    cout << "ISBN : ";
    cin >> ISBN;
    cout<<"Enter (E)copy of (H)ardbound: ";
        cin>>choice;
        fflush(stdin);
        if(choice=='e'||choice=='E')
        {
           getdata1();
        }
        if(choice=='h'||choice=='H')
        {
            getdata2();
        }
    
  }
  void putdata3(){
        
        if(choice=='e'||choice=='E')
        {
           putdata1();
        }
        if(choice=='h'||choice=='H')
        {
            putdata2();
        }
        cout <<ISBN;
    }

};
class magazine :public virtual literature, public Hardbound_literature , public e_literature{
  int ISSN;
  char choice;
    public:
  void getdata4()
  { 
    getdata();
    cout << "ISSN : ";
    cin >> ISSN;
    cout<<"Enter (E)copy of (H)ardbound: ";
        cin>>choice;
    fflush(stdin);
    if(choice=='e'||choice=='E')
        {
           getdata1();
        }
        if(choice=='h'||choice=='H')
        {
            getdata2();
        }
  }
  void putdata4()
  {
    if(choice=='e'||choice=='E')
        {
           putdata1();
        }
        if(choice=='h'||choice=='H')
        {
            putdata2();
        }
    cout << ISSN;
  }
};

int main()
{
  book b1[30];
  magazine m1[30];
  int nn;
   int i;
  int countbook=0,countmagazine=0;
  char a;
  char b;
  char c;
  do{
  cout << "Enter 1 : Add book data"<<endl;
  cout << "Enter 2 : Add magazine data"<<endl;
  cout << "Enter 3 : List all books"<<endl;
  cout << "Enter 4 : List all magazines"<<endl;
  cout << "Enter your choice : ";
  cin >>nn;
  fflush(stdin);
  
  switch(nn)
  {
     do{
    case 1:
    b1[countbook].getdata3();
    countbook++;
    cout<<"Do you want to enter another book (y or n):";
     cin>>a;
     fflush(stdin);
     }while(a=='y'||a=='Y');
     break;

     case 2:
     do{
     
     m1[countmagazine].getdata4();
     countmagazine++;
     cout<<"Do you want to enter another Magazine (y or n):";
     cin>>b;
     fflush(stdin);
     }while(b=='y'||b=='Y');
     break;

     case 3:
     for(int i=0 ; i<countbook ; i++)
     {
      b1[i].putdata3();
      cout<<endl;
     }
     break;

     case 4:
     for(int i=0 ; i<countmagazine ; i++)
     {
      m1[i].putdata4();
      cout << endl;
     }
     break;
     default:
      cout << "Invalid choice!" << endl;
      break;
  }
  
  cout<<"Enter M to get to the menu:";
  cin>>c;
  fflush(stdin);

  }while (c == 'm' || c == 'M');
  

}