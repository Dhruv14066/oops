    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            vector<pair<string,int>> set;
            for(int i = 0; i < n; i++){
                string s;
                int a;
                cin >> s >> a;
                set.push_back({s,a});
            }
            sort(set.begin(), set.end());
            int result=0;
            for(int i = 0 ; i<n;i++){
                string current_word = set[i].first;
                int count0 = 0, count1 =0; 
                while (i < n && set[i].first == current_word) {
                if (set[i].second == 1) {
                    count1++;
                } else {
                    count0++;
                }
                i++;
            }
                 result += max(count0, count1);
            }
            cout << result << endl;
        }
        return 0;
    }