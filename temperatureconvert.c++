#include<iostream>
using namespace std;
int main()
{
    float Celsius;
    float farenheit;
    float   kelvin;
    Celsius = 37;
    farenheit = 32 + Celsius * (9.0/5.0) ;
    cout << Celsius << " degree celcius is " << farenheit << " degree farenheit"<< endl;
}