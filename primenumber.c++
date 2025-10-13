#include<iostream>
#include<cmath>
using namespace std;
bool prime(int num)
{
    if (num <= 1) 
    {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) 
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if (prime(num))
    {
        cout<<"Prime"<<endl;
    }
    else
    {
        cout<<"Not prime"<<endl;
    }
}
