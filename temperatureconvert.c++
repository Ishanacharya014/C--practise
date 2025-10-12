#include<iostream>
using namespace std;
int main()
{
    float Celsius;
    float farenheit;
    float   kelvin;
    Celsius = 37;
    farenheit = (Celsius * (9.0/5.0)+ 32) ;
    kelvin = Celsius +273.15;
    cout << Celsius << " degree farenheit is " << farenheit << " degree farenheit"<< endl;
    cout << Celsius << " degree farenheit is " << kelvin << "  kelvin"<< endl;
    kelvin = 285;
    farenheit = (kelvin - 273.15)*(9.0/5.0) +32;
    Celsius = (kelvin - 273.15);
    cout << kelvin << " kelvin is " << farenheit << " degree farenheit"<< endl;
    cout << kelvin << " kelvin is " << Celsius << " degree celsius"<< endl;
}
