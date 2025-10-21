#include<iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{1,0,2},{4,0,6},{0,8,0}};
    int i,j,sum = 0;
    for (i = 0;i<3;i++)
    {
    
        for(j = 0;j<3;j++)
        {
            if(arr[i][j] == 0)
            {
                sum +=1;
            }
        }
    }
    cout<<"Total zeroes are "<<sum<<endl;
    
}


