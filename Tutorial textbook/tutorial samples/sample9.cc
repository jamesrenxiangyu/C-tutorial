#include "sample9.h"

ostream& operator<<(ostream& os, const Point& pt){
    os << "(" << pt._x << ", " << pt._y << endl;
}

ostream& operator<<(ostream& os, const Point3D& pt3d){
    os << "(" << pt3d._x << ", " << pt3d._y << ", " << pt3d._z << endl;
}