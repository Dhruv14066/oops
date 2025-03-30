#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N, K;
    cin >> N >> K;

    // Initialize the array with values 1, 2, ..., N
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        A[i] = i + 1;
    }

    // Read the constraints
    vector<array<int, 3>> constraints(K); // Each constraint is an array of size 3
    for (int i = 0; i < K; ++i) {
        int L, R, m;
        cin >> L >> R >> m;
        constraints[i] = {L - 1, R - 1, m}; // Store the triplet (L-1, R-1, m) in 0-based indexing
    }

    // Process each constraint
    for (int j = 0; j < K; ++j) {
        int L = constraints[j][0];
        int R = constraints[j][1];
        int m = constraints[j][2];

        // for (int i = L; i <= R; ++i) {
        //     if (A[i] == m) {
        //         // Change A[i] to something that isn't m
        //         A[i] = (m == N ? m - 1 : m + 1);
                
        //     }
        // }

        // Check if the minimum is still m
        int minValue = *min_element(A.begin() + L, A.begin() + R );
        
        if (minValue == m) {
            cout << -1 << endl;
            return;
        }
    }

    // Output the valid array
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {solve();}
    return 0;
}
