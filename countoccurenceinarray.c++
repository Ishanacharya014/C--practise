#include<iostream>
using namespace std;
int count(int arr[],int n,int v);
int main()
{
    int arr[] = {4,2,2,2,2,3,3,3,3,4,4,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int v = 4;
    cout<<count(arr,n,v)<<endl;
}
int count(int arr[],int n,int v)
{
    
    if(n == 0)
    {
        return 0;
    }
    if(arr[n-1] == v)
    {
        return 1 +count(arr,n-1,v);
    }
    else
    {
        return count(arr,n-1,v);
    }
    
}
