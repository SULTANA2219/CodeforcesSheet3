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

        if (x <= 10) {
            cout << "A[" << i << "] = " << x << "\n";
        }
    }

    return 0;
}
