#include <bits/stdc++.h>
using namespace std;

int main(){
    int x , y;
    int t;
    cout << "Enter number of testcase u wanna try :" << endl;
    cin >> t;
    while(t--){
        cout << "Enter value of x and y : " << endl;
    cin >> x >> y;
    try{
        if(!y) throw y;
        else cout << (double) x/y << endl;
    }
    catch(int y){
        cout << "Error: Division by zero is not allowed." << endl;
    }
    catch(...){
        cout << "An unknown error expected" << endl;
    }
    }
    return 0;
}