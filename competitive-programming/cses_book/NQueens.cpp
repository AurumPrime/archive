#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> col_used;      // is this column already occupied?
vector<int> diag1_used;    // main diagonal occupied?
vector<int> diag2_used;    // anti-diagonal occupied?
vector<int> queen_col;     // queen_col[row] = column of queen in that row

void backtrack(int row) {
    // Base case: all rows have queens -> print solution
    if (row == n) {
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                if (queen_col[r] == c) cout << "Q";
                else cout << ".";
            }
            cout << "\n";
        }
        cout << "\n";
        return;
    }

    // Try every column in the current row
    for (int col = 0; col < n; col++) {
        // Check if column or diagonals are already used
        if (col_used[col]) continue;
        if (diag1_used[row - col + n]) continue;
        if (diag2_used[row + col]) continue;

        // Place queen at (row, col)
        queen_col[row] = col;
        col_used[col] = diag1_used[row - col + n] = diag2_used[row + col] = 1;

        // Recurse to next row
        backtrack(row + 1);

        // Backtrack: remove queen, free column/diagonals
        col_used[col] = diag1_used[row - col + n] = diag2_used[row + col] = 0;
    }
}

int main() {
    n = 4;
    col_used.assign(n, 0);
    diag1_used.assign(2 * n, 0);
    diag2_used.assign(2 * n, 0);
    queen_col.assign(n, -1);

    backtrack(0);
}
