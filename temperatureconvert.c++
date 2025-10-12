#include<iostream>
using namespace std;
int main()
{
    float Celsius;
    float farenheit;
    float   kelvin;
    farenheit = 37;
    Celsius = (farenheit - 32) * (5.0/9.0) ;
    kelvin = (farenheit - 32) * (5.0/9.0) +273.15;
    cout << farenheit << " degree farenheit is " << Celsius << " degree celsius"<< endl;
    cout << farenheit << " degree farenheit is " << kelvin << "  kelvin"<< endl;
}
