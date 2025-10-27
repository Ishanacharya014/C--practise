#include<iostream>
using namespace std;
int doubble(int *a)
{
    *a = (*a)*2;
    return *a;
}
int main() {
    int a = 10;
    cout << "Original value: " << a << endl;
    doubble(&a);
    cout << "Doubled value: " << a << endl;
    return 0;
}