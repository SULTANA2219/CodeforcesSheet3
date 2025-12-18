#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;

        if (x > 0) cout << 1;
        else if (x < 0) cout << 2;
        else cout << 0;

        if (i < N - 1) cout << " ";
    }

    cout << "\n";
    return 0;
}
