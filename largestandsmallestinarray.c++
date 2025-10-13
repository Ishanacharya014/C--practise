#include<iostream>
using namespace std;

int largest(int num[],int n)
{
    int a;
    a = num[0];
 
    for (int i = 1;i<n;i++)
    {
        if(num[i]>a)
        {
            a = num[i];
        }
        
    }
    return a;
}

int smallest(int num[],int n)
{
    int b;
    b = num[0];
 
    for (int i = 1;i<n;i++)
    {
        if(num[i]<b)
        {
            b = num[i];
        }
        
    }
    return b;
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
    
    cout<<"Largest is "<<largest(num,n)<<" and "<<" smallest is "<<smallest(num,n)<<endl;
    
}
