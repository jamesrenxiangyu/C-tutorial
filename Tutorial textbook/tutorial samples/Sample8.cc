#include <iostream>
#include "Circle.h"

using namespace std;
const double pi = 3.1415926;

void Circle::GetOrigin(double *x, double *y){
    *x = this -> x;
    *y = this -> y;
}

void Circle::SetOrigin(double x, double y){
    this -> x = x;
    this -> y = y;
}

double Circle::GetRadius(){
    return r;
}

void Circle::SetRadius(double r){
    this -> r = r;
}


double Circle::GetPerimeter(){
    return 2*pi*r;
}

double Circle::GetArea(){
    return pi*r*r;
}

int main(){
    Circle circle;
    circle.SetOrigin(1.0, 1.0);
    circle.SetRadius(5.0);
    double L = circle.GetPerimeter();
    double A = circle.GetArea();
    cout << "Perimeter is: " << L << endl;
    cout << "Area is: " << A << endl;

}
