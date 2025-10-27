#include<iostream>
using namespace std;
int main()
    {
    int arr[] = {1,2,3,4,5,6,7};
    int *a = arr;
    int i,l;
    int size = sizeof(arr) / sizeof(arr[0]);  
    l = *arr;
    for (int i = 1; i < size; ++i) {
        if(*(a + i)>l)
        {
            l = *(a+i);
        }
       
    }
    cout<<"Largest is "<<l<<endl;
    
}