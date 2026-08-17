//By AurumPrime, contest: Codeforces Round 1117 (Div. 2), problem: (C) Spying on the Beaver, Accepted
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> depth(n + 1, 0);

        for (int i = 2; i <= n; i++) {
            int p;
            cin >> p;
            depth[i] = depth[p] + 1;
        }

        int m;
        cin >> m;

        vector<int> dams(m);
        for (int i = 0; i < m; i++) {
            cin >> dams[i];
        }

        sort(dams.begin(), dams.end(), [&](int x, int y) {
            return depth[x] > depth[y];
        });

        cout << m - 1;
        for (int i = 0; i < m - 1; i++) {
            cout << ' ' << dams[i];
        }
        cout << '\n';
    }

    return 0;
}
