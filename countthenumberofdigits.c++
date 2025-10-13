#include<iostream>
using namespace std;
int numofdigit(int num)
{
    int s = 0;
    while(num != 0)
    {
        num = num/10;
        s++;
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
