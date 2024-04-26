#include <iostream>
#include<iomanip>
using namespace std;

class employee
{
 private:
    int id;
    string name;
    string qualification;
    float experince;
    long long int contact_number;
    static float avg_experince ;
    static int count;
protected :
    int get_id(){
        return id;
    }
    void getdata()
    {
        cout<<"Enter the Employee Detail"<<endl;
        fflush(stdin);
        cout << "Enter the Employee ID:";
        cin >> id;
        cout << "Enter Empoyee Name:";
        getchar();
        getline(cin, name);
        cout << "Enter the Qucalification:";
        getline(cin, qualification);

        cout << "Enter Experince:";
        cin >> experince;

        cout << "Enter the Contact Number:";
        cin >> contact_number;
        avg_experince+=experince;
        count++;
        fflush(stdin);
    }

    void putdata() const
    {
        cout.width(20);
        cout<<left<<"Employee ID"<<":"<< id << endl;
        cout.width(20);
        cout<<left<<"Employee Name"<<":"<< name<<endl;
        cout.width(20);
        cout<<left<<"Qucalification"<<":"<<qualification << endl;
        cout.width(20);
        cout<<left <<"Experince"<<":"<< experince << endl;
        cout.width(20);
        cout<<left<<"Contact Number"<<":"<< contact_number<<endl;
    }
     int searchdata(int empid){
        if(empid==id){
            return 1;
        }
        else{
            return 0;
        }
    }
    public:
      static void  experince(){
            cout<<"Average Experince of employee "<<avg_experince/count<<" years"<<endl;
    }
}e;
    float employee :: avg_experince;
    int employee :: count;
class non_teaching_employee:public employee{
    int salary;
    public:
    void getdata(){
       employee::getdata();
        cout<<"Enter the salary"<<endl;
        cin>>salary;
    }
    void putdata(){
        employee::putdata();
        cout.width(20);
        cout<<left<<"salary"<<":"<<salary<< endl;
    }
    int searchdata(int eid)
    {
            return (employee::searchdata(eid));

         }
};

class teaching_employee : public employee
{
    string designation;
    string spacialization;
    string pay_scale;

    public:
        void getdata(){
            employee::getdata();
            fflush(stdin);
            cout<<"Enter the designation"<<endl;
            getchar();
            getline(cin,designation);
            cout<<"Enter the spacialization"<<endl;
            getchar();
            getline(cin,spacialization);
            cout<<"Enter the pay_scale"<<endl;
            getchar();
            getline(cin,pay_scale);
            fflush(stdin);


        }
        void putdata(){
        employee::putdata();
        cout.width(20);
        cout<<left<<"Designation"<<":"<<designation<< endl;
        cout.width(20);
        cout<<left<<"spacialization"<<":"<<spacialization<< endl;
        cout.width(20);
        cout<<left<<"pay_scale"<<":"<<pay_scale<< endl;
        }

        int searchdata(int eid){
            return (employee::searchdata(eid));

         }

};
int main()
{
    int n,i,n_teaching,n_non_teaching;

    cout<<"Enter the numbers of  teaching employee:";
    cin>>n_teaching;
    teaching_employee t[n_teaching];
    cout<<"Enter the numbers of non teaching employee:";
    cin>>n_non_teaching;
    non_teaching_employee nont[n_non_teaching];




    for (int i = 0; i < n_teaching; i++)
    {
        cout<<"Enter Teaching Employee "<<i+1<<" detail"<<endl;
       t[i].getdata();
    }
    for (int i = 0; i < n_non_teaching; i++)
    {
        cout<<"Enter Non Teaching Employee "<<i+1<<" detail"<<endl;
       nont[i].getdata();
    }
    char ch;
    int emp_id,g,flag=0;
    do
    {
        cout << "Enter Employee id which you check:"<<endl;
        cin >> emp_id;
        flag=0;
        for ( i = 0; i < n_teaching; i++)
        {
                g=t[i].searchdata(emp_id);

                if(g==1)
                    {
                t[i].putdata();
                flag=1;
                break;
                }
            }
            if(flag==0)
                {
                 for ( i = 0; i < n_non_teaching; i++)
              {
                g=nont[i].searchdata(emp_id);

                if(g==1){
                nont[i].putdata();
                flag=1;
                break;
                }
            }
            }
            if(flag==0)
            {
                cout << "ERROR:ENTERED EMPLOYEE ID DOSE NOT EXIST"<<endl;

            }
            employee::experince();
        cout<<"Press Y for another Employee detail:";
        cin>>ch;


    }while(ch=='Y'||ch=='y');

}

