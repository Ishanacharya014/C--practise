#include<iostream>
using namespace std;
class Car {
private:
    string brand;
    string model;
    int year;

public:
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    void updateModel(string newModel) {
        model = newModel;
    }

    void updateYear(int newYear) {
        year = newYear;
    }

    void display() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
};
int main()
{
    Car c1("Toyota","Montblack",2002);
    c1.display();
    c1.updateModel("Supra");
    c1.updateYear(2005);
    c1.display();
}