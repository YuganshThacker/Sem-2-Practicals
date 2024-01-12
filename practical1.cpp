#include<iostream>
#include<string>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int main()
{
    char student_id[8];
    string student_name, subject[10];
    int semester, credit[10], i,j;
    int marks[10][2];
    int grade_point[6][2];
     int total_credit=0;
      float sgpa=0;

//input student details
    cout<<"Enter Details Of Student"<<endl<<"Student ID : ";
    cin>>student_id;

    cout<<"Student Name : ";
    cin>>student_name;

    cout<<"Semester : ";
    cin>>semester;
    fflush(stdin);

    for(i=0;i<3;i++)
    {
     cout<<"Enter Name of subject "<<i+1<<" : ";
     getline(cin,subject[i]);
     fflush(stdin);
    cout<<"Enter Credit : ";
     cin>>credit[i];
     fflush(stdin);
    }
//entering marks
    for(i=0; i<3; i++)
    {
        for(j=0; j<1; j++)
        {
            cout<<"Enter Marks for Subject "<<i+1<<" : "<<endl;
            cout<<"Theory : ";
            cin>>marks[i][j];
            fflush(stdin);
            cout<<"Practical : ";
            cin>>marks[i][j+1];
            fflush(stdin);
        }
    }

    cout<<"Student ID : "<<student_id<<endl;
    cout<<"Student Name : "<<student_name<<endl;
    cout<<"Semester : "<<semester<<endl;
    cout<<setw(38)<<"Theory"<<setw(15)<<"Practical"<<endl;
    for(i=0; i<3; i++)
    {
        cout<<left<<setw(35)<<subject[i];
        for(j=0; j<=1; j++)
        {
            if(marks[i][j]>=80)
            {
                cout<<setw(12)<<"AA";
                grade_point[i][j]=10;
            }
            else if(marks[i][j]>=73)
            {
                cout<<setw(12)<<"AB";
                grade_point[i][j]=9;
            }
            else if(marks[i][j]>=66)
            {
                cout<<setw(12)<<"BB";
                grade_point[i][j]=8;
            }
            else if(marks[i][j]>=60)
            {
                cout<<setw(12)<<"BC";
                grade_point[i][j]=7;
            }
            else if(marks[i][j]>=55)
            {
                cout<<setw(12)<<"CC";
                grade_point[i][j]=6;
            }
            else if(marks[i][j]>=50)
            {
                cout<<setw(12)<<"CD";
                grade_point[i][j]=5;
            }
            else if(marks[i][j]>=45)
            {
                cout<<setw(12)<<"DD";
                grade_point[i][j]=4;
            }
            else
            {
                cout<<setw(12)<<"FF";
                grade_point[i][j]=0;
            }
        }
        cout<<endl;
    }



    for(i=0;i<3;i++)
    {
        total_credit=total_credit + credit[i];
    }


    for(i=0;i<3;i++)
    {
        for(j=0;j<=1;j++)
        {
         sgpa= sgpa + (grade_point[i][j]*credit[i]);
        }
    }

    sgpa = sgpa/(total_credit*2);

    cout<<endl<<"SGPA : "<<setprecision(2)<<sgpa;
}
