/**
 * Author: AurumPrime (Abderrahmane Fakraoui)
 * Contest: Codeforces Round 1090 (Div. 4)
 * Problem: B - [The 67th 6-7 Integer Problem]
 * Date: 2026-08-16
 */
#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        long long sum = 0;
        long long max_val = -1000000000;
        for(int i = 0; i < 7; i++) {
            long long x;
            cin >> x;
            sum += x;
            max_val = max(max_val, x);
        }
        cout << 2 * max_val - sum << "\n";
    }
    
    return 0;
}
