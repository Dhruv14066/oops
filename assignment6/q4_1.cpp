#include <iostream>
using namespace std;

// Abstract base class with pure virtual function
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
    virtual void area() = 0;  // Another pure virtual function
};

// Derived class inheriting from Shape
class Circle : public Shape {
public:
    void draw()  {
        cout << "Drawing a Circle" << endl;
    }
    void area()  {
        cout << "Area of Circle" << endl;
    }
};

// Another derived class
class Square : public Shape {
public:
    void draw()  {
        cout << "Drawing a Square" << endl;
    }
    void area()  {
        cout << "Area of Square" << endl;
    }
};

int main() {
    Shape* shapePtr;  // Pointer to base class (abstract class)

    Circle circleObj;
    Square squareObj;

    shapePtr = &circleObj;
    shapePtr->draw();  // Calls Circle's draw
    shapePtr->area();  // Calls Circle's area

    shapePtr = &squareObj;
    shapePtr->draw();  // Calls Square's draw
    shapePtr->area();  // Calls Square's area

    return 0;
}
