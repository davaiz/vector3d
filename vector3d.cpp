
vector3d  #include "vector3d.hpp"

#include <cmath>

const vector3d vector3d::X = {1, 0, 0};
const vector3d vector3d::Y = {0, 1, 0};
const vector3d vector3d::Z = {0, 0, 1};
const vector3d vector3d::ZERO = {0, 0, 0};

// TODO: дописать
double vector3d::get_x() {
    return x; }
double vector3d::get_y() {
    return y; }
double vector3d::get_z() {
    return z; }


vector3d::vector3d() {
    x = 0;
    y = 0;
    z = 0;
}
vector3d::vector3d( double _x, double _y, double _z) {
    x = _x;
    y = _y;
    z = _z;
}
vector3d vector3d::operator + (const vector3d &a) const {
        return vector3d(x + a.x, y + a.y, z + a.z );
}
vector3d vector3d::operator - (const vector3d &a) const {
    return vector3d(x - a.x, y - a.y, z - a.z );
}
double vector3d::operator * (const vector3d &a) const {
    return (x * a.x + y * a.y + z * a.z);
}
vector3d vector3d::operator ^ (const vector3d &a) const {
    return vector3d(y * a.z - z * a.y, z * a.x - x * a.z, x * a.y - y * a.x );
}
vector3d vector3d::operator * (double mult, const vector3d &a) const {
    return vector3d(mult * a.x, a.y * mult, a.z * mult);
}
vector3d vector3d::operator * (const double &a, double mult) const {
    return vector3d(mult * a.x, a.y * mult, a.z * mult);
    
}
double vector3d::length() const {
    return sqrt(x * x + y * y + z * z);
}
vector3d vector3d::normalize() const {
    double length = this->length();
    return vector3d(x/length, y/length, z/length);
}
double vector3d::compareTo( const vector3d &other ) const {
    return((x-other.x)+(y-other.y)+(z-other.z));
}
bool vector3d::operator == (const vector3d &a) const { return compareTo(a)==0; }
bool vector3d::operator != (const vector3d &a) const { return compareTo(a)!=0; }
std::ostream& operator<<(std::ostream& out, const vector3d &a){

    out << "{" << a.x << ", " << a.y << ", " << a.z << "}";

    return out;

}


