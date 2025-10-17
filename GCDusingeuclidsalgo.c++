#include<iostream>
using namespace std;
int gcd(int a,int b);
int main()
{
    int a = 48;
    int b = 18;
    cout<<gcd(a,b)<<endl;
}
int gcd(int a,int b)
{
    if (b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

