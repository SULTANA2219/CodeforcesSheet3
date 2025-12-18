#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = N - 1; i >= 0; i--) {
        cout << A[i];
        if (i > 0) cout << " ";
    }

    cout << "\n";
    return 0;
}
