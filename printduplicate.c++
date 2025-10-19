#include<iostream>
using namespace std;
int main()
{
    int i,j,k= 0;
    int arr[] = {1,2,3,4,2,4,5,6,7};
    for(i = 0;i<(sizeof(arr)/sizeof(arr[0]));i++)
    {
        k=0;
        for (j = 0; j < (sizeof(arr)/sizeof(arr[0])); j++)
        {
            if(arr[i] == arr[j])
            {
                k++;
                
            }
        }
        if (k >1)
        {
            bool alreadyPrinted = false;
            for (int x = 0; x < i; x++) {
                if (arr[x] == arr[i]) {
                    alreadyPrinted = true;
                    break;
                }
               }
            if (!alreadyPrinted)
                cout << arr[i] << " ";
        }

        
    }

}


