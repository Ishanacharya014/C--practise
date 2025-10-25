#include<iostream>
using namespace std;
class Book {
private:
    string title;
    string author;
    double price;

public:
    Book(string t, string a, double p) {
        this ->title = title;
        this->author = author;
        this->price = price;
    }

    void display() {
        cout << "Title: " << title << "\nAuthor: " << author << "\nPrice: " << price << endl;
    }

    void updatePrice(double newPrice) {
        price = newPrice;
    }
};
int main()
{
    Book b1("Harry Potter", "J.K. Rowling", 400);
    b1.display();
    b1.updatePrice(350);
    b1.display();

}