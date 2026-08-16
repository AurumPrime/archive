/**
 * Author: AurumPrime (Abderrahmane Fakraoui)
 * Contest: Codeforces Round 1090 (Div. 4)
 * Problem: A - [The 67th Integer Problem]
 * Date: 2026-08-16
 */
#include <iostream>
using namespace std;
 
void solve() {
    long long x;
    cin >> x;
    if (x < 67) {
        cout << x + 1 << "\n";
    } else {
        cout << 67 << "\n";
    }
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}
