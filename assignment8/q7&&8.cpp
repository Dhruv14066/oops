#include <iostream>
using namespace std;

template <class T>
class Numeric {
private:
    T value; // Numeric data type variable

public:
    // Constructor with template
    Numeric(T val) : value(val) {}

    // Function to divide the value by 2
     T divideBy2(); //{ // implicit call
    //     return value / 2;
    // }

    // Function to display the current value
    void display() {
        cout << "Value: " << value << endl;
    }
};
 // explixit call 
 template <class T>
 T Numeric<T>::divideBy2() { 
        return value / 2;
    }
int main() {
    // Creating objects with different numeric types
    Numeric<int> intObj(100);
    Numeric<float> floatObj(10.5);
    Numeric<double> doubleObj(42.84);

    // Display and perform divideBy2 operation
    intObj.display();
    cout << "After divideBy2: " << intObj.divideBy2() << endl;

    floatObj.display();
    cout << "After divideBy2: " << floatObj.divideBy2() << endl;

    doubleObj.display();
    cout << "After divideBy2: " << doubleObj.divideBy2() << endl;

    return 0;
}
