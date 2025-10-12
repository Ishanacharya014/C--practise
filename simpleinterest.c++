#include <iostream>
using namespace std;
int main()
{
    float principle = 30000;
    float rate = 2;
    float time = 3;
    float SI;
    SI = (principle*time*rate)/100.0;
    cout  << "The SI unit is " << SI << endl;
}