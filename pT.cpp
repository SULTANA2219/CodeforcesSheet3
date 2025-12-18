#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<vector<int>> A(N, vector<int>(N));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> A[i][j];

    int sumPrimary = 0, sumSecondary = 0;
    for (int i = 0; i < N; i++) {
        sumPrimary += A[i][i];
        sumSecondary += A[i][N-1-i];
    }

    cout << abs(sumPrimary - sumSecondary) << "\n";

    return 0;
}
