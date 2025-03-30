#include <bits/stdc++.h>
using namespace std;

bool isStrictlyBetter(const vector<int>& a, const vector<int>& b) {
    if(a[0]<b[0]||a[1]<b[1]||a[2]<b[2]) return false;
    int count = 0;
    if(a[0]==b[0]) count++;
    if(a[1]==b[1]) count++;
    if(a[2]==b[2]) count++;
    if(count==3) return false;
    return true;
}

bool canOrderTeam(vector<vector<int>>& students) {
    vector<int> order = {0, 1, 2};
    do {
        if (isStrictlyBetter(students[order[0]], students[order[1]]) &&
            isStrictlyBetter(students[order[1]], students[order[2]])) {
            return true;
        }
    } while (next_permutation(order.begin(), order.end()));
    
    return false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        vector<vector<int>> students(3,vector<int>(3));
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cin >> students[i][j];
            }
        }
            if (canOrderTeam(students)) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}