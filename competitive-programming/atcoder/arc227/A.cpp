#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string a, b, c;
    cin >> a >> b >> c;

    vector<int> pos_a, pos_b, pos_c;
    for (int i = 0; i < 2 * n; i++) {
        if (a[i] == '1') pos_a.push_back(i);
        if (b[i] == '1') pos_b.push_back(i);
        if (c[i] == '1') pos_c.push_back(i);
    }

    string x(2 * n, '0');
    long long total_dist = 0;

    for (int i = 0; i < n; i++) {
        vector<int> temp = {pos_a[i], pos_b[i], pos_c[i]};
        
        sort(temp.begin(), temp.end());
        int median_pos = temp[1]; 

        x[median_pos] = '1';

        total_dist += abs(pos_a[i] - median_pos) + 
                      abs(pos_b[i] - median_pos) + 
                      abs(pos_c[i] - median_pos);
    }

    cout << total_dist << "\n";
    cout << x << "\n";

    return 0;
}
