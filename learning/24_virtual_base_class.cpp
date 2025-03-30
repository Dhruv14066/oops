#include <bits/stdc++.h>
using namespace std;

class student{
  protected:
  int roll_no;
  public:
  void set_roll(int a){
        roll_no = a;
  }
  void get_roll(){
    cout<<"Roll No is "<<roll_no<<endl;
  }
};


class test: virtual public student{
    protected :
    int marks;
    public:
    void set_marks(int a){
        marks = a;
    }
    void get_marks(){
        cout << "Marks in test is "<< marks << endl;
    }
};

class sports: virtual public student{
    protected :
    int grade;
    public:
    void set_grade(int a){
        grade = a;
    }
    void get_grade(){
        cout << "Marks in sports is "<< grade << endl;
    }
};

class result : public test, public sports{
    public:
    void display_result(){
    get_roll();
    get_marks();
    get_grade();
    cout << "Result is "<<marks+grade << endl;
    }

};
int main(){
    result r;
    r.set_roll(1);
    r.set_marks(90);
    r.set_grade(10);
    r.display_result();
    return 0;
}