#include<iostream>
using namespace std;
bool pal(string a,int start,int end);
int main()
{
    string a = "madam";
    if (pal(a,0,a.length()-1))
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not palindrome"<<endl;
    }
}
bool pal(string a,int start ,int end)
{
    string b;
    if (start>=end)
    {
        return true; 
    }
    if(a[start]!=a[end])
    {
        return false;
    }
    return pal(a,start+1,end-1);
    
}

