#include <bits/stdc++.h>
using namespace std;
 namespace A{
    void display (){
        cout << "Haan ji" <<endl;
    }
 }
 namespace B{
       void display(){
        cout << "Acha ji"<<endl;
       }
 }
int main(){
     B::display();
     A::display();
    return 0;
}