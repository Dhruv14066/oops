#include <bits/stdc++.h>
using namespace std;

//Base class
class Employee{
   private :
   
   public :
   int  id;
   float salary;
   Employee(int inpid){
    id = inpid;
    salary = 34.0;
   }
   Employee(){};
};

//syntax for derived class 
/*
class {{derived-class-name}} : {{visiblity-mode}} {{base class name}}
{
};
Notes:
1. Default visiblity mode is private.
2. Public visiblity mode : public member of the base class become public member of the derived class.
3. private visiblity mode : public member of the base class become private member of the derived class.
4. Private members are never inherited.
5. there should be a default constructor in base class.
*/

//derived class from base class employee
class Programmer : public Employee{
    public:
    Programmer(int ipid){
        id = inpid;
    }
    int langcode = 9;
    void getData()
    {
        cout << id << endl;
    }
}
int main()
{

}