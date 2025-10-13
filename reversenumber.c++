#include<iostream>
using namespace std;

int reverse(int num)
{
    int p,reverse = 0;
    for (int i = 0;num!=0;i++)
    {
    p = num%10;
    reverse = reverse*10 + p;
    num = num/10;
    }
    return reverse;
}

int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"reverse is "<<reverse(num)<<endl;
    
}
