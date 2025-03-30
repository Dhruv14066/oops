#include <bits/stdc++.h>
using namespace std;

class Complex{
   int real;
   int imaginary;
   public:
   void set_data(int a, int b){
    real = a;
    imaginary = b;
   }
   void get_data(){
    cout << "Real part: " << real << endl;
     cout << "imaginary part: " << imaginary << endl;
   }
};
int main()
{
    // Complex c;
    // Complex *ptr = &c;
    Complex *ptr = new Complex();
    // (*ptr).set_data(3, 4);
    // (*ptr).get_data();
    ptr->set_data(3,4); // arrow operator is as good as dot operator
    ptr->get_data();
    return 0;
}