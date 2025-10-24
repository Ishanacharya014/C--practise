#include<iostream>
using namespace std;
class Circle{
public: 
   int radius;
   void area()
   {
    double area;
    area = (22.0/7.0)*radius*radius;
    cout<<"Area is "<<area<<endl;
   }

   void circum()
   {
    double circum;
    circum = 2*(22.0/7.0)*radius;
    cout<<"Circumference is "<<circum<<endl;
   }
};
int main()
{
    Circle c1;
    c1.radius = 23;
    c1.area();
    c1.circum();
    
}


