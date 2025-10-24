#include<iostream>
using namespace std;
class Teacher{
private:
        double salary;
    
public:
    Teacher()
    {
        dept = "Computer Science";
    }

    Teacher(string n,string d,string s,double sal)
    {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    string name;
    string dept;
    string subject;

    void channgeDept(string newDept)
    {
        dept = newDept;
    }

    void setSalary(double s)
    {
        salary = s;
    }

    double getSalary()
    {
        return salary;
    }

    void getinfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Department: "<<dept<<endl;
    }
};

int main()
{
    Teacher t1("Shraddha","Computer Science","C++",25000);
    
    t1.getinfo();
    return 0;
    
}


