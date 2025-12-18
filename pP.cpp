#include <bits/stdc++.h>
using namespace std;

int countDiv2(int x) {
    int cnt = 0;
    while (x % 2 == 0) {
        x /= 2;
        cnt++;
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    int ans = INT_MAX;
    for (int i = 0; i < N; i++) {
        ans = min(ans, countDiv2(A[i]));
    }

    cout << ans << "\n";
    return 0;
}
