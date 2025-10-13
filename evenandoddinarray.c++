#include<iostream>
using namespace std;
int even(int num[],int n)
{
    int ceven = 0;
    for (int i = 0;i<n;i++)
    {
         if(num[i]%2 == 0)
         {
            ceven += 1;
         }
    }
    return ceven;
}
int odd(int num[],int n)
{
    int codd = 0;
    for (int i = 0;i<n;i++)
    {
         if(num[i]%2 != 0)
         {
            codd += 1;
         }
    }
    return codd;
}
int main()
{
    int n;
    cout<<"Enter the number of array: ";
    cin>>n;
    int num[n];
    for (int i = 0;i <n;i++)
    {
        cout<<"Enter the number: ";
        cin>>num[i];
    }
    
    cout<<"Even are "<<even(num,n)<<" and "<<" Odd are "<<odd(num,n)<<endl;
    
}
