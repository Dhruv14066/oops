#include <bits/stdc++.h>
using namespace std;

class base{
  public:
  void func(){
    cout << "Base" << endl;
  }
};
class child : public base{
    public:
    void func1(){
        cout << "Child" << endl;
    }
};
int main(){
    child c1;
    child* p1 = &c1;
    p1->func();
    p1->func1();
    return 0;
}