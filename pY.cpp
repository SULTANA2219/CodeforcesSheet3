#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, Q;
    cin >> N >> Q;

    vector<long long> A(N + 1); // 1-indexed
    vector<long long> prefix(N + 1, 0); // prefix sum array

    // Read array elements
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        prefix[i] = prefix[i - 1] + A[i]; // compute prefix sum
    }

    // Process queries
    for (int i = 0; i < Q; i++) {
        int L, R;
        cin >> L >> R;
        // Sum from L to R = prefix[R] - prefix[L-1]
        cout << prefix[R] - prefix[L - 1] << "\n";
    }

    return 0;
}
