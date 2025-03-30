#include  <bits/stdc++.h>
using namespace std;

class Complex {
    int a , b;
    public:
    //  Complex(); // default constructor

     Complex(int , int ); // parameterised comstructor 
     void print_details()
     {
        cout << a << " + i" << b << endl;
     }
};
// Complex :: Complex() // default constructor 
// {
//      a=0;
//      b=0;
// }
Complex :: Complex(int x, int y ) // parameterised constructor 
{
    a = x;
    b = y ;
}
/* characters of constructors :

1. It should be decalred inside the public section of the class 
2. They are automatically invoked wenever object is created
3. it doesn't return type 
4. we can't refer to their adress
*/
int main(){
Complex c(4,5); // implicit call
Complex b = Complex(5,6); // explicit call 
c.print_details();
b.print_details();
}