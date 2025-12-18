#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int x;
    cin >> x;

    int mn = x;
    int pos = 1;   // 1-based index

    for (int i = 2; i <= N; i++) {
        cin >> x;
        if (x < mn) {
            mn = x;
            pos = i;
        }
    }

    cout << mn << " " << pos << "\n";
    return 0;
}
