#include <iostream>
using namespace std;

// Abstract class with a pure virtual function
class Base {
public:
    Base() {
        cout << "Base class constructor called" << endl;
    }
    
    // Pure virtual function, making this class abstract
    virtual void show() = 0;
};

// Derived class inheriting from abstract Base class
class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor called" << endl;
    }

    // Implementing the pure virtual function
    void show() {
        cout << "Derived class show function" << endl;
    }
};

int main() {
    // Base b; // Error: Cannot instantiate an abstract class
    Derived d;  // Creates a Derived object

    d.show();   // Calls the overridden show function

    return 0;
}
