#include <bits/stdc++.h>
using namespace std;

// Define a simple class
class Rectangle {
private:
    int width, height;

public:
    // Constructor
    Rectangle(int w, int h) : width(w), height(h) {}

    // Function to calculate area using the 'this' pointer
    int area() {
        return this->width * this->height;
    }

    // Function to set dimensions using 'this' pointer
    void setDimensions(int w, int h) {
        this->width = w;
        this->height = h;
    }

    // Function to display dimensions
    void displayDimensions() {
        cout << "Width: " << this->width << ", Height: " << this->height << endl;
    }
};

int main() {
    // Create an object of Rectangle
    Rectangle rect(10, 5);

    // Use dot operator to access members
    cout << "Using dot operator:" << endl;  
    rect.displayDimensions();
    cout << "Area: " << rect.area() << endl;

    // Create a pointer to the Rectangle object
    Rectangle *rectPtr = &rect;

    // Use arrow operator to access members via pointer
    cout << "\nUsing arrow operator:" << endl;
    rectPtr->setDimensions(15, 10);
    rectPtr->displayDimensions();
    cout << "Area: " << rectPtr->area() << endl;

    return 0;
}
