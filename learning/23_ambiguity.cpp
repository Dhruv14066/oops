#include<bits/stdc++.h>
using namespace std;


class base1{
    protected:
    int base1_int;
    public :
    void greet(){
        cout << " Hello! " << endl;
    }
};

class base2{
    protected:
    int base2_int;
    public:
    void greet(){
        cout << " Konnichiwa! " << endl;
    }
};

class derived : public base1, public base2 {
 int a;
 public:
 void greet(){
    base2::greet();
 }
};

class A{
  public:
  void say(){
    cout << "danish bhai agar aaj zinda rehte na" << endl;
  }
};

class B : public A{
    public:
    //same name function in derived class override base class's function (ambiguity resolve on its own)
    void say(){
        cout << "biscuit matlab vish ki kit"<<endl;
    }
};

int main(){
    //ambiguity 1(multiple inheritance)
    // base1 obj1;
    // base2 obj2;
    // derived d1;
    // obj1.greet();
    // obj2.greet();
    // d1.greet();

    //ambiguity 2
    B amb;
    amb.say();
    return 0;
}