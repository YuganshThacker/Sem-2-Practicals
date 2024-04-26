#include <iostream>
#include <iomanip>
using namespace std;
class result;
string convert(int);
int sgpa(int);
class student
{
    char student_id[8];
    int semester;
    string name_of_student;

public:
    void getdata()
    {
        cout << "Enter student id:";
        cin >> student_id;
        cout << "Enter Name of student:";
        getchar();
        getline(cin, name_of_student);
        cout << "Enter the Semester:";
        cin >> semester;
    }
    void putdata()
    {
        cout.width(15);
        cout << left << "Student ID"
             << ":" << student_id << endl;
        cout.width(15);
        cout << left << "Student Name"
             << ":" << name_of_student << endl;
        cout.width(15);
        cout << left << "Semester"
             << ":" << semester << endl;
    }
    void getdata_result(result &);
    void putdata_result(result &);
};

class result
{
    char subject[3][30];

    int sum1 = 0, sum2 = 0, credit_sum = 0;

    float Sgpa;

    string theory_grade[3], practical_grade[3];
    int theory_mark[3], practical_mark[3];
    int theory_g[3], practical_g[3], theory_c[3], practical_c[3];
    friend void student::getdata_result(result &r);
    friend void student::putdata_result(result &r);
};
void student ::getdata_result(result &r)
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter " << i + 1 << " subject name:";
        getchar();
        cin.getline(r.subject[i], 30);
        cout << "Enter marks for " << r.subject[i] << " (Theory Practical): " << endl;
        cin >> r.theory_mark[i] >> r.practical_mark[i];
        cout << "Enter credit for " << r.subject[i] << " (Theory Practical): " << endl;
        cin >> r.theory_c[i] >> r.practical_c[i];
        r.theory_grade[i] = convert(r.theory_mark[i]);
        r.practical_grade[i] = convert(r.practical_mark[i]);
        r.theory_g[i] = sgpa(r.theory_mark[i]);
        r.practical_g[i] = sgpa(r.practical_mark[i]);
        r.sum1 += r.theory_g[i] * r.theory_c[i];
        r.sum2 += r.practical_g[i] * r.practical_c[i];
        r.credit_sum += r.theory_c[i] + r.practical_c[i];
    }
    r.Sgpa = (float)(r.sum1 + r.sum2) / r.credit_sum;
}
string convert(int mark)
{
    if (mark >= 80)
    {
        return "AA";
    }
    else if (mark >= 73 && mark < 80)
    {
        return "AB";
    }
    else if (mark >= 66 && mark < 73)
    {
        return "BB";
    }
    else if (mark >= 60 && mark < 66)
    {
        return "BC";
    }
    else if (mark >= 55 && mark < 60)
    {
        return "CC";
    }
    else if (mark >= 50 && mark < 55)
    {
        return "CD";
    }
    else if (mark >= 45 && mark < 50)
    {
        return "DD";
    }
    else if (mark < 45)
    {
        return "FF";
    }
    return 0;
}
int sgpa(int mark)
{
    if (mark >= 80)
    {
        return 10;
    }
    else if (mark >= 73 && mark < 80)
    {
        return 9;
    }
    else if (mark >= 66 && mark < 73)
    {
        return 8;
    }
    else if (mark >= 60 && mark < 66)
    {
        return 7;
    }
    else if (mark >= 55 && mark < 60)
    {
        return 6;
    }
    else if (mark >= 50 && mark < 55)
    {
        return 5;
    }
    else if (mark >= 45 && mark < 50)
    {
        return 4;
    }
    else if (mark < 45)
    {
        return 0;
    }
    return 0;
}

void student ::putdata_result(result &r)
{

    cout.width(25);
    cout << left << "Subject";
    cout << setw(10) << "Theory"
         << "Practical" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << left << setw(25) << r.subject[i];
        cout << setw(10) << r.theory_grade[i] << setw(10) << r.practical_grade[i];
        cout << endl;
    }
    cout << endl
         << "SGPA:" << setprecision(3) << r.Sgpa << endl;
}
int main()
{
    student s;
    result r;
    for (int i = 0; i < 2; i++)
    {
        s.getdata();
        s.getdata_result(r);
        s.putdata();
        s.putdata_result(r);
    }
}
