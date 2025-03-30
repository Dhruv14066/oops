#include <bits/stdc++.h>
using namespace std;
 int i = 10;
class Complex{
    float real;
    float imaginary;

    public:
    void  setComplex (float , float );
    void displayComplex(){
        cout << "The Complex number is " << real << " + i" << imaginary << endl;
    }
   
    static Complex add_Complex(Complex& C1, Complex& C2)
    {
        Complex C3;
        int i = 0;
        C3.real = C1.real + C2.real;
        C3.imaginary = C1.imaginary + C2.imaginary;
        return C3;
    }
};

void Complex :: setComplex (float a , float b)
    {
         real = a;
         imaginary = b;
    }
int main(){
    Complex C1, C2;
    C1.setComplex(3, 4);
    C2.setComplex(4, 6);
    Complex C3 = Complex::add_Complex(C1, C2);
    C1.displayComplex();
    C2.displayComplex();
    C3.displayComplex();
    std::cout << ::i << endl;
    return 0;
}