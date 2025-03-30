#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> arr(N);
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }

        // Try all subsets using bitmasks
        bool found = false;
        vector<int> subsetIndices;

        for (int mask = 1; mask < (1 << N); ++mask) { // Start from 1 to avoid empty subsets
            int subsetAND = -1; // Start with all bits set
            vector<int> indices;

            for (int i = 0; i < N; ++i) {
                if (mask & (1 << i)) { // If the i-th bit is set in the mask
                    indices.push_back(i + 1); // 1-based indexing
                    subsetAND = (subsetAND == -1) ? arr[i] : (subsetAND & arr[i]);
                }
            }

            if (subsetAND == K) {
                found = true;
                subsetIndices = indices;
                break;
            }
        }

        if (found) {
            cout << "YES\n";
            cout << subsetIndices.size() << "\n";
            for (int idx : subsetIndices) {
                cout << idx << " ";
            }
            cout << "\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    solve();
    return 0;
}
