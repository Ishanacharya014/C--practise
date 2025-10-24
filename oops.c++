#include<iostream>
using namespace std;
class Teacher{
private:
        double salary;
    
public:
    string name;
    string dept;
    string subject;

    Teacher()
    {
        dept = "Computer Science";
    }

    Teacher(string name,string dept,string subject,double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        salary = salary;
    }

    
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


