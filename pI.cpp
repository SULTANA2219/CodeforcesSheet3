#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<long long> A(N + 1);
        for (int i = 1; i <= N; i++) {
            cin >> A[i];
        }

        long long best = A[1] - 1;
        long long ans = LLONG_MAX;

        for (int j = 2; j <= N; j++) {
            ans = min(ans, best + A[j] + j);
            best = min(best, A[j] - j);
        }

        cout << ans << "\n";
    }

    return 0;
}
