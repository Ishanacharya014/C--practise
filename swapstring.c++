#include<iostream>
using namespace std;

void swapStrings(char **str1, char **str2) {
    char *temp = *str1;  
    *str1 = *str2;       
    *str2 = temp;        
}

int main()
{
    char *s1 = "Hello";
    char *s2 = "World";
    swapStrings(&s1, &s2);
    cout << "After swap: " << s1 << ", " << s2 << endl;
}