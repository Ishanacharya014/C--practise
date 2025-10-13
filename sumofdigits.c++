#include<iostream>
using namespace std;
int numofdigit(int num)
{
    int s = 0,p;
    while(num != 0)
    {
        p = num%10;
        s = s + p;
        num = num/10;
    }
    return s;
}
int main()
{
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    cout<<numofdigit(num)<<endl;
    
}
