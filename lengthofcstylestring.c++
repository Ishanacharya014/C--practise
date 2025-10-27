#include<iostream>
using namespace std;
int stringlength(char *str) {
    char *ptr = str;
    while(*ptr != '\0') {
        ptr++;
    }
    return ptr - str;
}
int main()
{
    char str[] = "Hello";
    int length = stringlength(str);
    cout << "Length of the string is: " << length << endl;
}