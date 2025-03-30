#include <bits/stdc++.h>
using namespace std;

class student {
private:
string name;
int Roll_no;
string degree;
string hostel;
float cg;

public:
void add_details()
{
    cout << "Enter your Name: ";
    cin >> name;
    cout << "Enter your Roll number: ";
    cin >> Roll_no;
    cout << "Enter your degree: ";
    cin >> degree;
    cout << "Enter your hostel: ";
    cin >> hostel;
    cout << "Enter your cg: ";
    cin >> cg;
}
void display_details()
{
      cout << "      Your details     " << endl;
      cout << "your name is "<<name << endl;
      cout << "your roll number is "<<Roll_no << endl;
      cout << "your dregree is "<<degree << endl;
      cout << "your hostel is "<<hostel << endl;
      cout << "your cg is "<<cg << endl;
}
void update_details()
{
    int opt = 0;
while (opt!=-1)
{
    cout << " what u want to update ?" << endl;
    cout << " 1 for name" << endl;
    cout << " 2 for roll number " << endl;
    cout << " 3 for degree "<< endl;
    cout << " 4 for hostel "<<endl;
    cout << " 5 for cgpa "<< endl;
    cout << "-1 for exit" << endl;
cin >> opt;
switch(opt){
    case 1 : cout << "enter new name :" ;
             cin >> name;
             break;
    case 2 : cout << "enter new Roll number:" ;
             cin >> Roll_no;
             break;
 case 3 : cout << "enter new degree :" ;
             cin >> degree;
             break;
 case 4 : cout << "enter new hostel :" ;
             cin >> hostel;
             break;
 case 5 : cout << "enter new cg :" ;
             cin >>cg;
             break;
 default : cout << "Invalid entry";

}
}
}
};
int main()
{
    student A;
    A.add_details();
    A.display_details();
    A.update_details();
    A.display_details();
    return 0;
}
