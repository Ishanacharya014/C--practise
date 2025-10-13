#include<iostream>
using namespace std;

bool pal(int num)
{
    int p,reverse = 0;
    int s = num;
    for (int i = 0;num!=0;i++)
    {
    p = num%10;
    reverse = reverse*10 + p;
    num = num/10;
    }
    if (s == reverse)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;
    if (pal(num))
    {
        cout<<"palindrome"<<endl;
    }
    else
    {
        cout<<"not palindrome"<<endl;
    }
    
}
