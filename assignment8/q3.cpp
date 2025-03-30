#include <bits/stdc++.h>
using namespace std;
template<class T>
T myMax(T a, T b){
    return a > b ? a : b;
}
int main(){
    int a , b;
    char c1,c2;
    double f , g;
    cin >> a >> b;
    cout << myMax(a,b) << endl;
    cin >> c1 >> c2;
    cout << myMax(c1,c2) << endl;
    cin >> f >> g;
    cout << myMax(f,g) << endl;
    return 0;
}