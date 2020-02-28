#include "Sphere.h"
#include <math.h>

#include <fstream>
#include <iostream>
using namespace std;
extern bool debugOn;

Sphere::Sphere(Point4& center, float radius,
               Material& color) : Object(color) {
    c = center;
    r = radius;
    name = "unnamed";
}

bool Sphere::intersects(Ray4& ray, Hit& hit) {

    return true;
}

ostream& operator<<(ostream& os, const Sphere& sphere) {
    os << "Sphere \"" << sphere.name << "\" center " << sphere.c
       << " radius " << sphere.r;
    return os;
}
