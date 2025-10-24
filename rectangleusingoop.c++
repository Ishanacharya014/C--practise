#include<iostream>
using namespace std;
class Rectangle{
public: 
   int length;
   int breadth;
   void area()
   {
    double area;
    area = length *breadth;
    cout<<"Area is "<<area<<endl;
   }

   void peri()
   {
    double perimeter;
    perimeter =2*(length + breadth);
    cout<<"Perimeter is "<<perimeter<<endl;
   }
};
int main()
{
    Rectangle r1;
    r1.length = 12;
    r1.breadth = 13;
    r1.area();
    r1.peri();
}


