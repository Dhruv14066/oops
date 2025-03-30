#include <bits/stdc++.h>
using namespace std;
class test{
    int h,m,s;
    public:
    test(int a=0,int b=0,int c=0):h(a),m(b),s(c){};
    test operator +(test& t){
        test temp;
        temp.h = this->h + t.h;
        temp.m = this->m + t.m;
        temp.s = this->s + t.s;
        return temp;
    }
    void display(){
        cout << h << " " <<  m << " " << s << endl;
    }
};
int main(){
    test t1(5,15,34),t2(9,53,58),t3;
    t3 = t1 + t2;
    t3.display();
    return 0;
}