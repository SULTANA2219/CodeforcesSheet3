#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    int mn = *min_element(A.begin(), A.end()); // find minimum
    int freq = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == mn) freq++;
    }

    if (freq % 2 == 1)
        cout << "Lucky\n";
    else
        cout << "Unlucky\n";

    return 0;
}
