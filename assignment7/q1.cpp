#include <bits/stdc++.h>
using namespace std;
class A{
    private:
    int a;
    public:
    A(int x = 0){
        a = x;
    }
    // void operator ++(int){
    //     a++;
    // }

    A operator ++(int){
        A temp = *this;
        a++;
        return temp;
    }
    void display(){
        cout << a << endl;
    }
};
int main(){
    A b(5);
    b++;
    A c = b;
    b.display();
    c.display();
    return 0;
}