  #include "vector3d.hpp"

#include <cmath>

const vector3d vector3d::X = {1, 0, 0};
const vector3d vector3d::Y = {0, 1, 0};
const vector3d vector3d::Z = {0, 0, 1};
const vector3d vector3d::ZERO = {0, 0, 0};

// TODO: дописать
int vector3d::get_x() {
    return x; }
int vector3d::get_y() {
    return y; }
int vector3d::get_z() {
    return z; }


vector3d::vector3d() {
    x = 0;
    y = 0;
    z = 0;
}
vector3d::vector3d( int _x, int _y, int _z) {
    x = _x;
    y = _y;
    z = _z;
}
vector3d::operator + (const vector3d &a) {
    return(x + a.x, y + a.y, z + a.z );
}
vector3d::operator - (const vector3d &a) {
    return(x - a.x, y - a.y, z - a.z );
}
vector3d::operator * (const vector3d &a) {
    return(x * a.x, y * a.y, z * a.z);
}
vector3d::operator ^ (const vector3d &a) {
    return(y * a.z - z * a.y, z * a.x - x * a.z, x * a.y - y * a.x );
}
int vector3d::operator * (const int &a){
    return vector3d(x * a, y * a, z * a);
}
int vector3d::length(const vector3d &a){
    return sqrt(x*x+y*y+z*z);
}
vector3d::normalize(const vector3d &a){
    return vector3d(x/length(a),y/length(a),z/length(a));
}
int vector3d::compareTo( const vector3d &other ) const {
    return((x-other.x)+(y-other.y)+(z-other.z));
}
bool vector3d::operator == (const vector3d &a){ return compareTo(a)==0; }
bool vector3d::operator != (const vector3d &a){ return compareTo(a)!=0; }
