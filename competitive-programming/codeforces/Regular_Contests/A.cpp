// By AurumPrime, contest: Codeforces Round 1117 (Div. 2), problem: (A) Creating Abbreviations, Accepted,
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        bool available[26] = {false};

        for (int i = 0; i < n; i++) {
            string word;
            cin >> word;
            available[word[0] - 'a'] = true;
        }

        bool ok = true;

        for (int i = 0; i < m; i++) {
            string abbr;
            cin >> abbr;

            for (char c : abbr) {
                if (!available[c - 'A']) {
                    ok = false;
                }
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
