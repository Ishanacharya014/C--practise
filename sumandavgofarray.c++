#include<iostream>
using namespace std;
int sum(int num[],int n)
{
    int sum = 0;
    for (int i = 0;i<n;i++)
    {
        sum += num[i];
    }
    return sum;
}
int avg(int num[],int n)
{
    int avg = 0;
    for (int i = 0;i<n;i++)
    {
        avg += num[i];
    }
    avg = avg/n;
    return avg;
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
    
    cout<<"Sum is "<<sum(num,n)<<" and "<<" average is "<<avg(num,n)<<endl;
    
}
