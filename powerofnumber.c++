#include<iostream>
using namespace std;
int pow(int a,int b);
int main()
{
    cout<<pow(5,5)<<endl;
    
}
int pow(int a,int b)
{
    if (b == 0)
    {
        return 1;
    }
    return pow(a,b-1)*a;
    
}


