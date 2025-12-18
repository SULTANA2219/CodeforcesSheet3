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
        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        vector<int> result;
        for (int i = 0; i < N; i++) {
            int max_val = A[i];
            for (int j = i; j < N; j++) {
                max_val = max(max_val, A[j]);
                result.push_back(max_val);
            }
        }

        for (int k = 0; k < result.size(); k++) {
            cout << result[k];
            if (k != result.size() - 1) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
