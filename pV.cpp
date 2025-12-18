#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    vector<int> freq(M + 1, 0); // 1-indexed frequency array

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        freq[A[i]]++; // count frequency
    }

    for (int i = 1; i <= M; i++) {
        cout << freq[i] << "\n";
    }

    return 0;
}
