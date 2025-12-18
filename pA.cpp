#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    long long sum = 0;
    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;
        sum += x;
    }

    cout << llabs(sum) << "\n";

    return 0;
}
