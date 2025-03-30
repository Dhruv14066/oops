// Overloading vs Overriding 
#include <bits/stdc++.h>
using namespace std;

// class A { // function overloading using different parameters
// public:
//     void print(int a) { 
//         cout << a << endl;
//     }
//     void print(double a) { 
//         cout << a << endl;
//     }
//     void print(double a, int b) { 
//         cout << a << " " << b << endl;
//     }
// };

class base{
    public:
    virtual void display(){
        cout << "Base" << endl;
    }
};

class derived : public base{
      public:
      void display(){
        cout << "Derived" << endl;
      }
};

int main() {
    // A a;
    // a.print(10);      // Calls print(int)
    // a.print(9.8);     // Calls print(double)
    // a.print(9.8, 10); // Calls print(double, int)

    base b1;
    derived d1;
    base* ptr = &b1;
    ptr->display(); // call base class function 
    base* ptr1 = &d1;
    ptr1->display(); // call derived class function as virtual is used 
    d1.display();
    return 0;
}
