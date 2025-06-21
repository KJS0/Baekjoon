#include <iostream>
#include <array>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    array<int, 46> dp;
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= 45; i++) dp[i] = dp[i - 1] + dp[i - 2];
    
    int n; cin >> n;
    cout << dp[n] << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}