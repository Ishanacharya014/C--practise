#include<iostream>
using namespace std;
void stringCopy(char *destination, const char *source) {
    while((*destination++ = *source++) != '\0') {}
    
}
int main()
{
    char source[]= "Hello";
    char destination[30];
    stringCopy(destination,source);
    cout<<destination<<endl;


}