#include<iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{1,2,2},{4,5,6},{7,8,9}};
    int i,j;
    for (i = 0;i<3;i++)
    {
        int rowmax = 0;
        for(j = 0;j<3;j++)
        {
            if(rowmax<arr[i][j])
            {
                rowmax = arr[i][j];
            }
        }
        cout<<"Max for first row is "<<rowmax<<endl;
    }
    
}


