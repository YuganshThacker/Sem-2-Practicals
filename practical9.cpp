#include <iostream>
using namespace std;
class millimeter;
class centimeter;
class millimeter
{
    float mm;

public:
    millimeter()
    {
    }
    millimeter(centimeter &b);
    void getdata()
    {
        cout << "Enter measurement in mm :";
        cin >> mm;
    }
    float getmm()
    {
        return mm;
    }
    void putdata()
    {
        cout << "Measurement in cm :" << mm << endl;
    }
};
class centimeter
{
    float cm;

public:
    centimeter()
    {
    }
    centimeter(millimeter &a);
    void getdata()
    {
        cout << "Enter measurement in cm :";
        cin >> cm;
    }
    float getcm()
    {
        return cm;
    }
    void putdata()
    {
        cout << "Measurement in cm :" << cm << endl;
    }
};
millimeter ::millimeter(centimeter &b)
{
    mm = b.getcm() * 10;
}
centimeter ::centimeter(millimeter &a)
{
    cm = a.getmm() / 10;
}
int main()
{
    int n;
    cout << "Enter 1: mm to cm converter" << endl;
    cout << "Enter 2: cm to mm converter" << endl;
    cin >> n;
    millimeter o1;
    centimeter o2;
    switch (n)
    {
    case 1:
        o1.getdata();
        o2 = o1;
        o2.putdata();
        break;
    case 2:
        o2.getdata();
        o1 = o2;
        o1.putdata();
        break;
    default:
        cout << endl;
        cout << "The choice is invalid.";
        break;
    }
    return 0;
}