 #include <bits/stdc++.h>
 using namespace std;
 class base{
    public:
        virtual void display(){
            cout << "bye" << endl;
        }
 };

 class derived : public base{
  public :
  void display(){
    cout << "Itterashai" << endl;
  }
 };
 int main(){
    base* ptr ;
    base* ptr1;
    base b1;
    derived d1;
    ptr = &d1;
    ptr1 = &b1; // children pointer cant hold parent adress 
    ptr->display();  // parent pointer holding children adress but will call function of parent class as it has no knowledge of children function 
    ptr1->display();
    return 0;
 }