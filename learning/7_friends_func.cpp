#include<bits/stdc++.h>
using namespace std;
// class Y;
// class X{
//  int num;
//  public:
//    void setvalue(int value)
//    {
//      num = value;
//    }
//    friend void add(X,Y);
// };

// class Y{
//  int data;
//  public:
//    void setvalue(int value)
//    {
//      data = value;
//    }
//    friend void add(X,Y);
// };
//  void add(X o1,Y o2)
//  {
//     cout << o1.num + o2.data <<endl;
//  }

class c2;
class c1{
   int val;
   public :
   void indata(int a )
   {
    val = a;      
   }
   void display()
   {
    cout << val;
   }
   friend void exchange(c1 &,c2 &);
};

class c2{
   int val2;
   public :
   void indata(int a )
   {
    val2= a;
   }
   void display()
   {
    cout << val2;
   }
   friend void exchange(c1 &,c2 &);
};

void exchange(c1& x, c2& y) // without reference value will not be swapped
{
    int temp = x.val;
    x.val = y.val2; 
    y.val2 = temp;
}
int main()
{
 c1 a;
 a.indata(3);
c2 b;
 b.indata(5);
 exchange(a,b);
 a.display();
 b.display();
}