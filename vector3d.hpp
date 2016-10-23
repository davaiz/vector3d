

#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <ostream>

class vector3d {
public:
    const static vector3d X;
    const static vector3d Y;
    const static vector3d Z;
    const static vector3d ZERO;
    double x;
    double y;
    double z;
    double get_x();
    double get_y();
    double get_z();
    vector3d() ;
    vector3d( double _x, double _y, double _z) ;
    vector3d operator +(const vector3d &a) const;
    vector3d operator - (const vector3d &a) const;
    double operator * (const vector3d &a) const;
    vector3d operator ^ (const vector3d &a) const;
    
    double length() const;
    vector3d normalize() const;
    double compareTo( const vector3d &other ) const;
    bool operator == (const vector3d &a) const;
    bool operator != (const vector3d &a) const;
    // TODO: дописать

};
                    
std::ostream& operator<<(std::ostream& out, const vector3d &a);
vector3d operator * (double mult, const vector3d &a) const;
vector3d operator * (const double &a, double mult) const;

// TODO: дописать

#endif
