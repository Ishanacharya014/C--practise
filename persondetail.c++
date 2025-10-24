#include<iostream>
using namespace std;
class Person{
public:
    string name;
    int age;
    Person(string name,int age)
    {
        this->name = name;
        this->age = age;
    }

    void getInfo()
    {
        cout<<"Name is "<<name<<endl;
        cout<<"Age is "<<age<<endl;
    }
};
int main()
{
    Person p1("Ishan acharya",18);
   
    p1.getInfo();
    
}


