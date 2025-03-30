#include <iostream>
using namespace std;

// Class definition for Rectangle
class Rectangle {
    private:
        int length;
        int width;

    public:
        // Constructor to initialize the values
        Rectangle(int l = 0, int w = 0) : length(l), width(w) {}

        // Function to set the dimensions of the rectangle
        void setDimensions(int l, int w) {
            length = l;
            width = w;
        }

        // Function to calculate the area of the rectangle
        int calculateArea() {
            return length * width;
        }

        // Function to display the dimensions and area of the rectangle
        void displayArea() {
            cout << "Length: " << length << ", Width: " << width
                 << ", Area: " << calculateArea() << endl;
        }
};

int main() {
    // Number of rectangles
    const int numRectangles = 3;

    // Array of objects of class Rectangle
    Rectangle rectArray[numRectangles];

    // Input the dimensions for each rectangle
    for (int i = 0; i < numRectangles; i++) {
        int length, width;
        cout << "Enter the dimensions for Rectangle " << i + 1 << " (length and width): ";
        cin >> length >> width;

        // Set the dimensions of the current rectangle
        rectArray[i].setDimensions(length, width);
    }

    // Display the area of each rectangle
    cout << "\nDisplaying the area of each rectangle:\n";
    for (int i = 0; i < numRectangles; i++) {
        cout << "Rectangle " << i + 1 << ": ";
        rectArray[i].displayArea();
    }

    return 0;
}
