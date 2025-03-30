#include <bits/stdc++.h>
using namespace std;
class Complex{
    int real, imaginary;
    public:
    Complex(int a=0, int b=0) : real(a) , imaginary(b){};
    Complex operator +(Complex& ob){
        Complex temp;
        temp.real = this->real + ob.real;
        temp.imaginary = this->imaginary + ob.imaginary;
        return temp;
    }
    void display(){
        cout << real << " + i" << imaginary << endl;
    }
};
int main(){
    Complex A(1,2) , B(2,5);
    Complex c = A + B;
    c.display();
    return 0;
}