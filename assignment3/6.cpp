#include <iostream>
using namespace std;

// Inline function to calculate the cube of a number
inline int cube(int n) {
    return n * n * n;
}

int main() {
    int num;

    // Input number from the user
    cout << "Enter a number: ";
    cin >> num;

    // Calculate and display the cube of the number
    cout << "The cube of " << num << " is: " << cube(num) << endl;

    return 0;
}
    