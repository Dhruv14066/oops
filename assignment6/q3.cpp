#include <bits/stdc++.h>
using namespace std;

// class containing pure virtual functions is called abstract class
// can not form object of an abstract class 
class base{
   public:
   virtual void func(){
    cout << "Base" << endl;
   }

};

class derived: public base{
    public:
    void func(){
        cout << "Derived" << endl;
    }
};

int main(){
    base* b = new base();
    b->func();
    base *b1 = new derived();
    b1->func();
    // derived *d = new base(); //invalid 
    // d->func();
    derived* d = new derived();
    d->func();
    return 0;
}