#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    int a, b, c; cin >> a >> b >> c;
    int count = 0;
    for (int x = 1; x <= a; x++) {
        for (int y = 1; y <= b; y++) {
            for (int z = 1; z <= c; z++) {
                if (x % y == y % z && y % z == z % x && z % x == x % y) {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}

int main() {
    FASTIO
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
}