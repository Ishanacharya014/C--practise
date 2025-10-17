#include<iostream>
using namespace std;
string reverse(string a,int start,int end);
int main()
{
    string a = "letter";
    cout<<reverse(a,0,a.length()-1)<<endl;
}
string reverse(string a,int start,int end)
{
    string b;
    if(end < 0)
    {
        return "";
    }
    return a[end] + reverse(a,start,end-1);
}

