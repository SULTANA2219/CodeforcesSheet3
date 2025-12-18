#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, Q;
    cin >> N >> Q;
    vector<long long> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Sort array for binary search
    sort(A.begin(), A.end());

    // Process queries
    while (Q--) {
        long long X;
        cin >> X;
        if (binary_search(A.begin(), A.end(), X)) {
            cout << "found\n";
        } else {
            cout << "not found\n";
        }
    }

    return 0;
}
