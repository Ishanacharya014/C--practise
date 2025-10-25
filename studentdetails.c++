#include<iostream>
using namespace std;
class Student {
private:
    int rollNo;
    string name;

public:
    void getDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
    }

    void displayDetails() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};
int main()
{
    Student s1;
    s1.getDetails();
    s1.displayDetails();
}