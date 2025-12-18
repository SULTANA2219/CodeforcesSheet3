#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    vector<vector<int>> A(N, vector<int>(M));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> A[i][j];

    int X;
    cin >> X;

    bool found = false;
    for (int i = 0; i < N && !found; i++) {
        for (int j = 0; j < M; j++) {
            if (A[i][j] == X) {
                found = true;
                break;
            }
        }
    }

    cout << (found ? "will not take number" : "will take number") << "\n";

    return 0;
}
