#include<iostream>
using namespace std;
int sum(int num);
int main()
{
    cout<<sum(123456)<<endl;
    
}

int sum(int num)
{
    if (num == 0)
    {
       return 0;
    }
    return num%10 + sum(num/10);
    
}