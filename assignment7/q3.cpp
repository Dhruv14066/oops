#include <bits/stdc++.h>
using namespace std;
class obj {
int a;
public :
obj(int x = 0) : a(x){};
obj operator -(){
    obj temp;
    temp.a = -(this->a);
}
void display(){
    cout << a << endl;
}
};
int main(){
    obj A(5);
    obj C = -A;
    C.display();
    return 0;
}