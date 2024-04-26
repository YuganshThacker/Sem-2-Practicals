#include<iostream>

using namespace std;
class employee{

    private:
    int employee_id;
    string employee_name;
    string qualification;
    float experience;
    long long int contact;

    public:
    int Employee_id()
    {
        this->employee_id=employee_id;
        return employee_id;
    }

    string Employee_name()
    {
        this->employee_name=employee_name;
        return employee_name;
    }

    string Qualification()
    {
        this->qualification=qualification;
        return qualification;
    }

    float Experience()
    {
        this->experience=experience;
        return experience;
    }

    long long int Contact()
    {
        this->contact=contact;
        return contact;
    }
};

int main()
{
    int i;
    int n;
  cout << "Enter no of Employee :";
   cin >> n;
    employee e[n];



   for(i=0 ; i<n ; i++)
   {

    cout << "Enter Employee id :";
    cin >> e[i].Employee_id();
    fflush(stdin);

    cout << "Enter Employee Name :";
     getline(cin,e[i].Employee_name());
     fflush(stdin);

    cout << "Enter Qualification :";
    getline(cin,e[i].Qualification());
    fflush(stdin);

    cout << "Enter Experience :";
    cin >> e[i].Experience();

    cout << "Enter Contact :";
    cin >> e[i].Contact();
     fflush(stdin);

   }

int e_id;

 char choice;
    do {

        cout << "Enter an employee id: ";
        cin >> e_id;

        for (i = 0; i < n; i++) {
            if (e[i].Employee_id() == e_id) {
                cout << "---------------------------------"<<endl;
                cout.width(20);cout <<left<< "Employee Name " << ":"<<e[i].Employee_name() << endl;
                cout.width(20);cout <<left<< "Qualification " << ":"<<e[i].Qualification() << endl;
                cout.width(20);cout <<left<< "Experience " << ":"<<e[i].Experience() << endl;
                cout.width(20);cout <<left<< "Contact Number " <<":"<< e[i].Contact() << endl;
                cout << "---------------------------------"<<endl;

                break;
            }
      

            }
            if(i==n)  {

                cout << "*********************************"<<endl;
                cout << "ERROR: ENTERED EMPLOYEE ID DOES NOT EXIST" << endl;
                cout << "*********************************"<<endl;
            }


        cout << "Press Y to get another employee detail, press N to exit: ";
        cin >> choice;
        fflush(stdin);
    } while (choice == 'Y' || choice == 'y');


    return 0;
}
