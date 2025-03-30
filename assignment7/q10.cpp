#include <bits/stdc++.h>
using namespace std;


class Cartesian;  

class Polar {
private:
    double radius;
    double angle;  

public:
 
    Polar(double r, double a) : radius(r), angle(a) {}
    void show() {
       cout << "Polar Coordinates - Radius: " << radius << ", Angle: " << angle << " radians" << std::endl;
    }
    operator Cartesian();
};

class Cartesian {
private:
    double x;
    double y;

public:
    Cartesian(double x_coord=0, double y_coord=0) : x(x_coord), y(y_coord) {}
  

    void show() const {
        cout << "Cartesian Coordinates - X: " << x << ", Y: " << y << std::endl;
    }
};
 Polar:: operator Cartesian() {
        return Cartesian(radius * cos(angle),radius * sin(angle));
    }
int main() {
    Polar p(10, 0.5);  
    p.show();

    Cartesian c = p;
    c.show();

    return 0;
}
