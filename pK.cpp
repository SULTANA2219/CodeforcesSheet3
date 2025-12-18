#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    string digits;
    cin >> digits;

    long long sum = 0;
    for (char c : digits) {
        sum += c - '0'; // convert char to integer
    }

    cout << sum << "\n";
    return 0;
}
