#include<iostream>
using namespace std;
int sum(int arr[],int n);
int main()
{
    int arr[] = {2,4,6};
    int n = 3;
    cout<<sum(arr,n)<<endl;
}
int sum(int arr[],int n)
{
    if(n == 0)
    {
        return 0;
    }
    return arr[n-1] + sum(arr,n-1);

}