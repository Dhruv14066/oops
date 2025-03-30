#include <bits/stdc++.h>
using namespace std;
class second;
class one{
    int x;
    public :
    one(int a) { x=a;}
    friend void add(one,second);
    friend void swap(one& , second& );
};
class second{
    int y;
    public:
    second(int b){y = b;}
    friend void add(one,second);
    friend void swap(one& , second&);
};
void add (one a, second b){
    cout << a.x+b.y << endl;
}
 void swap(one& X, second& Y){
    int temp = X.x;
    X.x = Y.y;
    Y.y = temp;
    cout << X.x << endl << Y.y << endl;
 }
int main(){
    one A(1); second B(2);
    add(A,B);
    swap(A,B);
    return 0;
}           