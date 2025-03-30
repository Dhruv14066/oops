#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s = to_string(n);
        string temp = s;
        int x = s.length();
        int mino = INT_MAX;
        for (int i = 0;i<x;i++){
            string new_price_str = temp.substr(0, i) + temp.substr(i + 1);
            int min_price = stoi(new_price_str);    
            mino = min(mino,min_price);
        }
        cout << mino << endl;
    }
    return 0;
}