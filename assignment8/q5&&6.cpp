#include <bits/stdc++.h>
using namespace std;
template <class a, class b>
// void show(a A, a B){ // error
//     cout << A << " " << B << endl;
// }
void show(a A , b B){
    cout << A << " " << B << endl;
}
template <class T> // correct way to overload template
void show(T a, T b) { 
    cout << "Specialized template for same types: " << a << " " << b << endl;
}
int main(){
show(100,"hello hello");
show('k',1500);
show(1.23,2987);
show(3,3);
return 0;
}