#include <iostream>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    int a1, a0, c, n0;
    cin >> a1 >> a0;
    cin >> c;
    cin >> n0;

    bool result = true;
    for (int n = n0; n <= 100; n++) {
        if (a1 * n + a0 > c * n) {
            result = false;
            break;
        }
    }
    cout << result << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}