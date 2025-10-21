#include<iostream>
using namespace std;
int sum(int arr[][3],int n);
int main()
{
    int n = 3;
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<sum(arr,n)<<endl;
}
int sum(int arr[][3],int n)
{
    int i ,j,sum = 0;
    for(i = 0;i<n;i++)
    {
        for(j = 0;j<3;j++)
        {
            if (i == 0 || i == n-1)
            {
                sum += arr[i][j];
            }
            else if (j == 0 || j == 3-1)
            {
                sum +=arr[i][j];
            }
        }
    }
    return sum;
}

