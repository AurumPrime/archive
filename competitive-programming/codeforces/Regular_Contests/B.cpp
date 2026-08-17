//By AurumPrime, contest: Codeforces Round 1117 (Div. 2), problem: (B) Gigantomachy, Accepted, 
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

        vector<long long> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        long long hitsForVer = b[0] + m - 1;
        long long hitsForBea = a[0] + n - 1;

        if (hitsForVer <= hitsForBea)
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
    }

    return 0;
}
