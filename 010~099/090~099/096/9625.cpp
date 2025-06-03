#include <iostream>
#include <array>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

void solve() {
    array<int, 46> dp;
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= 45; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    int K;
    cin >> K;

    int& A = dp[K - 1];
    int& B = dp[K];
    cout << A << ' ' << B << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}