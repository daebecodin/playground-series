#include <iostream>
using namespace std;

int main()
{
    cout << boolalpha;
    float f = 16777216.0f; // 2^24
    double d = 16777216.0; // 2^24

    cout << (f + 1  == f) << endl;
    cout << (d + 1 == d) << endl;
}