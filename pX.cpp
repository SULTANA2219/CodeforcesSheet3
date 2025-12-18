#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<char>> A(N, vector<char>(M));

    // Read the matrix
    for (int i = 0; i < N; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < M; j++) {
            A[i][j] = row[j]; // store each character
        }
    }

    int X, Y;
    cin >> X >> Y;
    int r = X - 1, c = Y - 1; // convert to 0-indexed

    // 8 directions: top-left, top, top-right, left, right, bottom-left, bottom, bottom-right
    int dx[] = {-1,-1,-1,0,0,1,1,1};
    int dy[] = {-1,0,1,-1,1,-1,0,1};

    bool allX = true;

    for (int i = 0; i < 8; i++) {
        int nr = r + dx[i];
        int nc = c + dy[i];
        if (nr >= 0 && nr < N && nc >= 0 && nc < M) {
            if (A[nr][nc] != 'x' && A[nr][nc] != 'X') { // consider both 'x' and 'X'
                allX = false;
                break;
            }
        }
    }

    cout << (allX ? "yes" : "no") << endl;
    return 0;
}
