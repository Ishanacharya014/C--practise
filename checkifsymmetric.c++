#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter array order first and second: ";
    cin>>num1>>num2;
    int arr[num1][num2];
    for (int i = 0; i < num1; i++)
    {
        for(int j = 0 ;j<num2;j++)
        {cout<<"Enter number: ";
        cin>>arr[i][j];
    }
    }
    int transpose[num2][num1];
    
    
    for (int i = 0; i < num1; i++)
    {
        for(int j = 0 ;j<num2;j++)
        {transpose[j][i]=arr[i][j];
    }
    }
    bool symmetric = false;
    for (int i = 0; i < num1; i++)
    {
        for(int j = 0 ;j<num2;j++)
        {
        if(arr[i][j] == transpose[i][j])
        {
            symmetric = true;
        }
        else
        {
            symmetric = false;
        }
        }}
    if(symmetric)
    {
        cout<<"It is symmetric"<<endl;
    }
    else
    {
        cout<<"It is not symmetric"<<endl;
    }

}
