#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;
    cin >> A >> B;
    string S;
    cin >> S;

    bool ok = true;

    // Check length
    if (S.size() != A + B + 1) ok = false;

    // Check (A+1)-th character is '-'
    if (ok && S[A] != '-') ok = false;

    // Check all other characters are digits
    for (int i = 0; i < S.size(); i++) {
        if (i == A) continue; // skip '-'
        if (!isdigit(S[i])) {
            ok = false;
            break;
        }
    }

    cout << (ok ? "Yes" : "No") << "\n";

    return 0;
}
