#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 3;
    int c;
    cout<<"Originally "<< a << " and "<< b <<endl; 
    c = a;
    a= b;
    b = c;
    cout <<"Now " << a <<" and " << b<< endl;
    string first = "Hello";
    string second = "Hi";
    string third;
    cout<<"Originally "<< first << " and "<< second <<endl; 
    third = first;
    first= second;
    second = third;
    cout <<"Now " << first<<" and " << second<< endl;
}