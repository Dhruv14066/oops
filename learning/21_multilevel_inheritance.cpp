#include<bits/stdc++.h>
using namespace std;

class student{
     protected:
     int rollno;
     public:
     void set_rollno(int);
     void get_rollno();
};

void student :: set_rollno(int r){
     rollno = r;
}

void student :: get_rollno(){
    cout << "Your Roll number is " << rollno << endl;
}

class exam : public student{
    protected:
    float english;
    float hindi;
    public:

    void set_marks(float , float);
    void get_marks();
};

void exam :: set_marks(float e, float h){
    english = e;
    hindi = h;
}

void exam :: get_marks(){
   cout << "Your marks in English is " << english <<endl;
   cout << "Your marks in Hindi is " << hindi <<endl;
}

class result : public exam{
    public :
    void display_result(){
        get_rollno();
        get_marks();
        cout << "Your result is " << (english + hindi)/2 << endl;
    }
};
int main()
{
    result random;
    random.set_rollno(10);
    random.set_marks(90,91);
    random.display_result();
    return 0;
}