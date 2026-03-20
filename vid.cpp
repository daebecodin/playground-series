/*
 * Created by imdem on 3/19/2026.
*/

#include <iostream>
using namespace std;

int main()
{
    int x = 420, y = 67, z = 69;

    const int *p1 = &x; // reseat the pointer; not write through it
    int *const p2 = &y; // modify through the pointer, not reseat the pointer

    // *p1 = 42;
    // p1 = &y;

    // *p2 =42;
    // p2 = &z;

    return 0;
}