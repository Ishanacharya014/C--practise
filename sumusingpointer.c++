#include<iostream>
using namespace std;
int sum(int *a,int *b)
{
    int s;
    s = (*a)+ (*b);
    return s;
}
int main()
{
    int a = 10,b =20;
    cout<<"Sum is "<<sum(&a,&b)<<endl;
}