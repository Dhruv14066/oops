#include <bits/stdc++.h>
using namespace std;
class Test{
int y;  
public:
Test(int a = 0) : y(a){};
friend void operator - (Test &x);
void display(){
    cout << "y = " << y << endl;
}
};
void operator-(Test &x){
  x.y = -(x.y);
}
int main(){
Test x1(5);
-x1;
x1.display();
}