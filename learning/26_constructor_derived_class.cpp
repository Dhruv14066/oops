#include <bits/stdc++.h>
using namespace std;

/*
   case 1 : 
   class B : public A {
      order of execution -> first A() -> then B()
   };

   case 2:
   class A : public B public C{
   order of execution -> first B() -> then C() -> then A()
   };

   case 3 :

   class A : public B , virtual public C{
   order of execution -> first C() -> then B() -> then A()
   };
*/

// example 

class base1{
   protected:
   int data1;
   public:
   base1(int a){
    data1 = a;
   }

   void base1_data(){
    cout<<"Base1 data = "<<data1<<endl;
   }
};
class base2{
   protected:
   int data2;
   public:
   base2(int a){
    data2 = a;
   }

   void base2_data(){
    cout<<"Base2 data = "<<data2<<endl;
   }
};

class derived : public base1, public base2{
    protected:
    int data3;
    public:
    derived(int a, int b, int c):base1(a),base2(b){
        data3 = c;
}
void derived_data(){
    cout<<"Derived data = "<<data3<<endl;
}
};
int main(){
    derived d(1,2,3);
    d.base1_data();
    d.base2_data();
    d.derived_data();
    return 0;
}