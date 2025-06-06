#include <iostream>
#include <array>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;

    array<int, 100001> dp;
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 0;
    dp[4] = 2;
    dp[5] = 1;
    for (int i = 6; i <= 100000; i++) {
        if (dp[i - 2] && dp[i - 5]) dp[i] = min(dp[i - 2], dp[i - 5]) + 1;
        else if (dp[i - 2]) dp[i] = dp[i - 2] + 1;
        else if (dp[i - 5]) dp[i] = dp[i - 5] + 1;
        else dp[i] = 0;
    }

    cout << (dp[n] ? dp[n] : -1) << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}