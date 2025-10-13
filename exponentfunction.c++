#include <iostream>
using namespace std;

int power(int baseNum,int powNum)
{
    int result = 1;
    for (int i = 0;i<powNum;i++){
        result = result * baseNum;

    }
    return result;
}
int main()
{
    int baseNum,powNum;
    cout<<"Enter the base number: ";
    cin>>baseNum;
    cout<<"Enter power number: ";
    cin>>powNum;
    cout<<power(baseNum,powNum)<<endl;
}