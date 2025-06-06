#include <iostream>
#include <array>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    int H, Y;
    cin >> H >> Y;

    array<int, 11> dp;
    dp[0] = H;
    for (int i = 1; i <= 10; i++) {
        dp[i] = 1.05 * dp[i - 1];
        if (i >= 3) dp[i] = max(dp[i], static_cast<int>(1.2 * dp[i - 3]));
        if (i >= 5) dp[i] = max(dp[i], static_cast<int>(1.35 * dp[i - 5]));
    }
    cout << dp[Y] << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}