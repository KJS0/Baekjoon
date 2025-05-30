#include <iostream>
#include <vector>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

void solve() {
    int k, n;
    cin >> k >> n;

    vector<vector<int>> apart(k + 1, vector<int>(n));
    for (int i = 0; i < n; i++) {
        apart[0][i] = i + 1;
    }

    for (int i = 0; i <= k; i++) {
        apart[i][0] = 1;
    }

    for (int i = 1; i <= k; i++) {
        for (int j = 1; j < n; j++) {
            apart[i][j] = apart[i - 1][j] + apart[i][j - 1];
        }
    }
    cout << apart[k][n - 1] << endl;
}

int main() {
    FASTIO
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
}