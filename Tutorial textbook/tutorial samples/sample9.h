/*  类的继承 -- 单继承*/
#include <iostream>

using namespace std;

class Point{
    public:
        Point(int x=0, int y=0): _x(x), _y(y) {}
        Point(const Point& pt): _x(pt._x), _y(pt._y) {}
        int GetX() const {return _x;}
        void SetX(int x) {_x = x;}
        int GetY() const {return _y;}
        void SetY(int y) {_y = y;}
        friend ostream& operator<<(ostream& os, const Point& pt);
    
    protected:
        int _x, _y;
};

class Point3D: public Point{
    public:
        Point3D(int x=0, int y=0, int z=0) : Point(x, y), _z(z){}
        Point3D(const Point3D& pt3d): Point(pt3d._x, pt3d._y), _z(pt3d._z) {}
        int GetZ() const {return _z;}
        void SetZ(int z) {_z = z;}
        friend ostream& operator<<(ostream& os, const Point3D& pt3d);

    protected:
        int _z;

};