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
    cout<<"Original array: "<<endl;
    for (int i = 0; i < num1; i++)
    {
        for(int j = 0 ;j<num2;j++)
        {
        cout<<arr[i][j]<< " ";
    }
    cout<<endl;
    }
    for (int i = 0; i < num1; i++)
    {
        for(int j = 0 ;j<num2;j++)
        {transpose[j][i]=arr[i][j];
    }
    }
    cout<<"transpose is "<<endl;
    for (int i = 0; i < num1; i++)
    {
        for(int j = 0 ;j<num2;j++)
        {
        cout<<transpose[i][j]<< " ";
    }
    cout<<endl;
}
}
