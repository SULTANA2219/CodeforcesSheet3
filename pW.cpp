#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    vector<vector<int>> A(N, vector<int>(M));

    // Read matrix
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> A[i][j];

    // Print mirrored matrix
    for (int i = 0; i < N; i++) {
        for (int j = M - 1; j >= 0; j--) {
            cout << A[i][j];
            if (j > 0) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
