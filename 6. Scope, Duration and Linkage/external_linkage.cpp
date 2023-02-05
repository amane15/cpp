#include <iostream>

// Function by default have external linkage
// non const globals are external by default

// to declare global const
extern const int g_y{3};
// same with constexpr
extern constexpr int g_z{34};
