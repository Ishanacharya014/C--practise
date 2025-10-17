#include<iostream>
using namespace std;
int max(int arr[],int n);
int min(int arr[],int n);
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<max(arr,n)<<endl;
    cout<<min(arr,n)<<endl;
    
}
int max(int arr[],int n)
{
    if(n==1)
    {
        return arr[0];   
    }
    int maxRest = max(arr,n-1);
    return (arr[n-1]>maxRest)?arr[n-1]:maxRest;

}
int min(int arr[],int n)
{
    if(n==1)
    {
        return arr[0];   
    }
    int minRest = min(arr,n-1);
    return (arr[n-1]<minRest)?arr[n-1]:minRest;

}


