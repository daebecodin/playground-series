/*
 * Created by Durand Dyer-Branch on 3/18/26.
 *
 * Does const lock the pointer itself or the object it points to?
*/

#include <iostream>
using namespace std;

int main () {
    int x = 420;
    int y = 67;
    int z = 69;

    const int *p1 = &x; // restricts writing to the pointee; can still reseat though
    int *const p2 = &y; // restricts reseating of pointer; can still update the pointee though.
    cout << "Pre" << '\x0a';
    cout << p1 << '\x0a';
    cout << p2 << '\x0a';
    cout << '\x0a';

#if 0
    *p1 = 69; // compile err; cannot assign through read only variable
#endif
#if 0
    p2 = z; // compile err; cannot assign to read only pointer
#endif

    *p2 = x;
    p1 = &z;

    cout << "Post" << '\x0a';
    cout << *p1 << '\x0a';
    cout << *p2 << '\x0a';
    cout << p1 << '\x0a';
    cout << p2 << '\x0a';



}