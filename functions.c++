#include <iostream>
using namespace std;

void sayHi(string name,int age);
int main()
{
    string user;
    int age;
    cout << "Enter your name: ";
    getline(cin,user);
    cout<<"Enter your age: ";
    cin>>age;
    sayHi(user,age);
}void sayHi(string user , int age){
    cout<< "Hello "<< user<<" You are "<<age << " Years old"<<endl;
}