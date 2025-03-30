#include<bits/stdc++.h>
using namespace std;

class base1{
    protected:
    int base1_int;
    public :
    void set_int(int a )
    {
        base1_int = a;
    }
};

class base2{
    protected:
    int base2_int;
    public:
    void set_int1(int a ){
        base2_int = a;
    }
};

class derived : public base1, public base2 {
  public :
  void display()
  {
    cout << "value of base1 int is " << base1_int << endl;
    cout << "value of base2 int is " << base2_int << endl;
    cout << "value of base3 int is " << base1_int + base2_int <<endl;
  }
};
int main()
{
    derived d;
    d.set_int(10);
    d.set_int1(5);
    d.display();
    return 0;
}