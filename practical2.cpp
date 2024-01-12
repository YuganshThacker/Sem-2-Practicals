#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<string>
using namespace std;
struct employee{


    int employee_id;
    string employee_name;
    string qualification;
    float experience;
    int contact;




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
    cin >> e[i].employee_id;
    fflush(stdin);

    cout << "Enter Employee Name :";
     getline(cin,e[i].employee_name);
     fflush(stdin);

    cout << "Enter Qualification :";
    getline(cin,e[i].qualification);
    fflush(stdin);

    cout << "Enter Experience :";
    cin >> e[i].experience;

    cout << "Enter Contact :";
    cin >> e[i].contact;
     fflush(stdin);

   }



 char yugansh;
    do {
        int e_id;
        cout << "Enter an employee id: ";
        cin >> e_id;

        for (int i = 0; i < n; i++) {
            if (e[i].employee_id == e_id) {
                cout << "---------------------------------"<<endl;
                cout.width(20);cout <<left<< "Employee Name " << ":"<<e[i].employee_name << endl;
                cout.width(20);cout <<left<< "Qualification " << ":"<<e[i].qualification << endl;
                cout.width(20);cout <<left<< "Experience " << ":"<<e[i].experience << endl;
                cout.width(20);cout <<left<< "Contact Number " <<":"<< e[i].contact << endl;
                cout << "---------------------------------"<<endl;
                break;
            } else  {
                cout << "ERROR: ENTERED EMPLOYEE ID DOES NOT EXIST" << endl;
            }
        }

        cout << "Press Y to get another employee detail, press N to exit: ";
        cin >> yugansh;
        fflush(stdin);
    } while (yugansh == 'Y' || yugansh == 'y');

    return 0;
}

