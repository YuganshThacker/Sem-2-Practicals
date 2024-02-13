#include<iostream>
#include<string>
#include<iomanip>
#define pi 3.14
using namespace std;
class calc{
 float area_of_circle, area_of_rectangle ,area_of_cuboid;
 float radius_of_circle;
 float r,l,w,h;

 public:
 
 float area(float r)
 {
   area_of_circle=pi*r*r;
   return area_of_circle;
 }
 float  area(float l , float w)
 {
    area_of_rectangle=l*w;  
    cout <<area_of_rectangle;
    return area_of_rectangle;
 }
 float area(float l , float w , float h)
 {
    area_of_cuboid= l*w*h;
    return area_of_cuboid;
 }
};

int main()
{   float r,l,w,h;
    calc c1;
    cout << "Enter the Radius of the Circle :";
    cin >> r;
     
    cout<<"The Area of the Circle is :" <<c1.area(r)<<endl;

    cout << "Enter Height of the Rectangle :";
    cin >> h;

    cout << "Enter width of the Rectangle :";
    cin >> w;
    cout<<"The Area of the Rectangle is :" <<c1.area(h,w)<<endl;

    cout << "Enter the Height of the Cuboid :";
    cin >>h;

    cout << "Enter the width of the Cuboid :";
    cin >>w;

    cout << "Enter the Depth of the Cuboid :";
    cin >>l;

    cout<<"The Area of the Cuboid is :" << c1.area(l,w,h)<<endl;

    

}



