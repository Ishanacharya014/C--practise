#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,j;
    vector<int> arr1={1,3,4,5,7};
    vector<char> arr2 = {'a','b','c','d','e'};
    for (i = 0;i<arr1.size();i++)
    {
        for (j = 0;j<arr2.size();j++)
        {
            cout<<"("<<arr1[i]<<" , "<<arr2[j]<<")";
        }
        cout<<endl;
    }
}


