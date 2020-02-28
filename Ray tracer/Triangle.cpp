#include "Triangle.h"

#include <math.h>
#include <fstream>
#include <iostream>
using namespace std;
extern bool debugOn;

#define EPSILON 0.00001

Triangle::Triangle(Point4& v1, Point4& v2, Point4& v3,
                   Material& color) : Object(color) {
    this->v1 = v1;
    this->v2 = v2;
    this->v3 = v3;
    name = "unnamed";

    setNormal();
}

void Triangle::setNormal() {
    Vector4 edge1 = v2 - v1;
    Vector4 edge2 = v3 - v1;

    N = (edge1 ^ edge2).normalized();

    if (debugOn) {
        cout << "Triangle.setNormal N=" << N << "\n";
    }
}

bool Triangle::intersects(Ray4& ray, Hit& hit) {
    return false;
}

ostream& operator<<(ostream& os, const Triangle& triang) {
    os << "Triangle \"" << triang.name << "\" v1 " << triang.v1
       << " v2 " << triang.v2 << " v3 " << triang.v3;
    return os;
}
