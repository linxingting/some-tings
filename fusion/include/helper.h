#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

constexpr double pi() { return M_PI; }
double deg2rad(double angle){ return angle * pi() / 180; }
double rad2deg(double angle){ return angle / pi() * 180; }