#include<iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{7,2,1},{4,1,6},{1,8,9}};
    int i,j;
    for (j = 0;j<3;j++)
    {
        int columnmin = arr[j][0];
        for(i = 0;i<3;i++)
        {
            if(columnmin>arr[i][j])
            {
                columnmin = arr[i][j];
            }
        }
        cout<<"Min for first column is "<<columnmin<<endl;
    }
    
}


