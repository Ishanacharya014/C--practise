#include <iostream>
using namespace std;

void printInfo(string name, int age = 18) {
    cout << "Name: " << name << ", Age: " << age << endl;
}

int main() {
    printInfo("Alice", 25);  
    printInfo("Bob");     
}
