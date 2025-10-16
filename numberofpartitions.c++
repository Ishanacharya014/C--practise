#include<iostream>
using namespace std;

int count_partitions(int n,int m);
int main()
{
    cout<<count_partitions(9,5)<<endl;
}

int count_partitions(int n,int m)
{
    if (n == 0)
    {
        return 1;
    }
    else if (m == 0 or n<0)
    {
        return 0;
    }
    else
    {
        return count_partitions(n-m,m)+count_partitions(n,m-1);
    }
}
