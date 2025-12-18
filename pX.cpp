#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<char>> A(N, vector<char>(M));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> A[i][j];

    int X, Y;
    cin >> X >> Y;
    int r = X - 1, c = Y - 1; // convert to 0-indexed

    int dx[] = {-1,-1,-1,0,0,1,1,1};
    int dy[] = {-1,0,1,-1,1,-1,0,1};

    bool allX = true;

    for (int i = 0; i < 8; i++) {
        int nr = r + dx[i];
        int nc = c + dy[i];
        if (nr >= 0 && nr < N && nc >= 0 && nc < M) {
            if (A[nr][nc] != 'X') {
                allX = false;
                break;
            }
        }
    }

    cout << (allX ? "yes" : "no") << "\n";
    return 0;
}
