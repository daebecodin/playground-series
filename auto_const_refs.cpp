/*
 * Created by Durand Dyer-Branch on 3/22/26.
 *
 * plain auto drops top-level const and reference-ness
 *
 * auto& builds an alias so it preserves const and must legally bind with the referred-to object constraints
 *
 * const auto& can bind to and extend the lifetime of tempoary objects
*/

#include <iostream>
#include "type_name.h"
int main() {
    using std::cout;

    int i = 420;

    const int ci = i;
    int &ri = i;
    const int &rci = ci;

    // plain auto; value copies from ci, ri, and rci
    auto a = ci;
    auto b = ri;
    auto c = rci;

    // auto&; forms reference to referred to obj; binding must respect og obj restraints
    auto &d = i;
    auto &e = ci;
    const auto &f = 67;



}