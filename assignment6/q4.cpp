#include <bits/stdc++.h>
using namespace std;

class A{ // abstract class
    public:
    virtual void display() = 0;
};
class B : public A{
public:
virtual void display() {
    cout << "Hello" << endl;
}
};
class C : public B{
public:
void display() {
    cout << "Hi" << endl;
}
};
int main(){
    B b;
    C c;
    B* ptr = &c;
    ptr->display();
    return 0;
}