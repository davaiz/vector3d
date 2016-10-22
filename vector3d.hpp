 #ifndef VECTOR3D_H
#define VECTOR3D_H

#include <ostream>

class vector3d {
public:
    const static vector3d X;
    const static vector3d Y;
    const static vector3d Z;
    const static vector3d ZERO;
    int x;
    int y;
    int z;
    int get_x();
    int get_y();
    int get_z();
    vector3d() ;
    vector3d( int _x, int _y, int _z) ;
    vector3d operator +(const vector3d &a) const;
    vector3d operator - (const vector3d &a) const;
    vector3d operator * (const vector3d &a) const;
    vector3d operator ^ (const vector3d &a) const;
    int operator * ((const int &a) const;
    int length(const vector3d &a) const;
    vector3d normalize(const vector3d &a) const;
    int normalize(const vector3d &a) const ;
    bool operator == (const vector3d &a) const;
    bool operator != (const vector3d &a) const;
    // TODO: дописать

};
std::ostream &operator<<(std::ostream &stream, const vector3d& a) {
        return stream << "(" << a.x << ";" << a.y << ";" << a.z << ")";
}
// TODO: дописать

#endif
