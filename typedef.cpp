/*
 * Created by imdem on 3/18/2026.
*/


typedef int *pint; // alias for pointer -> int

int main ()
{
    int x = 67;
    pint p1 = &x; // address of x
    pint *p2 = &p1;

    // int *p3 = p2;
    // *p2 = nullptr;



}