#include <bits/stdc++.h>
using namespace std;
class obj{
    int a;
    public:
    obj(int x = 0): a(x){};
    bool operator &&(obj& test){
        return (this->a)&&(test.a);
    }
};
int main(){
    obj A(1), B(0);
    if(A&&B) cout << "Yes" << endl;
    else cout << "NO" << endl;
    return 0;
}