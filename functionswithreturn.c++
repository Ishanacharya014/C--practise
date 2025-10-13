#include <iostream>
using namespace std;

double cube(double num)
{
    double result = pow(num,3);
    return result;
}

int main()
{
    cout <<cube(5.0)<<endl;
}