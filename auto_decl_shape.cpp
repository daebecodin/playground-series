/*
 * Created by Durand Dyer-Branch on 3/21/26.
 *
 * auto builds a base type from its initializer
 *
 * auto b looks like it should create a pointer -> pointer
 *
 * but does it?
 *
*/

int main () {
    int x = 420;
    int *p = &x;

    auto a = p;
    auto *b = p;

    return 0;
}