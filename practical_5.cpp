#include<iostream>
using namespace std;
#define pi 3.148
class set_radius{
    private:
float r, area_of_circle;
int count=0;
public:
set_radius()
{   
    area(r);   
    count++;
    cout << count;
    object();
}
set_radius(float r)
{   area(r);
    count++;
    cout << count;
    object();
}


float area(float r)
{   
    cout << "Radius of Circle :";
    cin >> r;
    area_of_circle=pi*r*r;
    cout <<area_of_circle<<endl;
    return area_of_circle;
    
}
    ~set_radius()
{
    cout << "one object is Deleted"<<endl;
    count--;
    
}

void object()
{
    cout << "Total active Objects are: "<<count<<endl;
}
};
int main()
{  float r;
    set_radius c1 ,c2(20),c3(c1);
    
}