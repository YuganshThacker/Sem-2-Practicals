#include <iostream>
using namespace std;
class A
{
    float a, y, year, month;

public:
    A()
    {
        a = 0;
        y = 0;
        year = 0;
        month = 0;
    }
    A(float &x)
    {
        a = x;
        y = (a - int(a));
        month = (y * 12);
        year = int(a);
    }
    void putdata()
    {
        cout << "Employee experience is " << int(year) << " years and " << int(month)
             << " months" << endl;
    }
};
int main()
{
    float n;
    cout << "Enter the Employee Experience :";
    cin >> n;
    A oa;
    oa = n;
    oa.putdata();
    return 0;
}