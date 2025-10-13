#include<iostream>
using namespace std;
int main()
{
    int mark1,mark2,mark3,mark4,mark5;
    cout<<"Enter marks for five subjects: ";
    cin>>mark1>>mark2>>mark3>>mark4>>mark5;
    int avg;
    avg = (mark1 + mark2 + mark3 + mark4 + mark5)/5;
    if (avg>=85)
    {
        cout<<"A"<<endl;
    }
    else if (avg>=75)
    {
        cout<<"B"<<endl;
    }
    else if (avg>=50)
    {
        cout<<"C"<<endl;
    }
    else if (avg>=30)
    {
        cout<<"D"<<endl;
    }
    else{
        cout<<"F"<<endl;
    }
        
}
