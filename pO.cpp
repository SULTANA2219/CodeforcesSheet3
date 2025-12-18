#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    if (N == 1) {
        cout << 0 << "\n";
        return 0;
    }
    if (N == 2) {
        cout << 1 << "\n";
        return 0;
    }

    long long a = 0, b = 1, c;
    for (int i = 3; i <= N; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << b << "\n";
    return 0;
}
