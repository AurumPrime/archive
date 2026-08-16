/**
 * Author: AurumPrime (Abderrahmane Fakraoui)
 * Contest: Codeforces Round 1090 (Div. 4)
 * Problem: C - [The 67th Permutation Problem]
 * Date: 2026-08-16
 */
#include <iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        int left = 1; 
        int right = 3 * n;
        
        for(int p = 0; p < 3 * n; p++) {
            if(p % 3 == 0) {
                cout << left++ << " ";
            } 
            else {
                cout << right-- << " ";
            }
        }
        cout << "\n";
    }
    
    return 0;
}
