#include<iostream>
using namespace std;
int value(int num[],int n,int v)
{
    for (int i = 0;i<n;i++)
    {
        if (num[i] == v)
        {
            return i;
        }
        
    }
    return -1;
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
    int v;
    cout<<"Enter the value you want to search: ";
    cin>>v;
    if(value(num,n,v) != -1)
    {cout<<"Index is "<<value(num,n,v)<<endl;}
    else
    {
        cout<<"Value not found"<<endl;
    }
    
}
