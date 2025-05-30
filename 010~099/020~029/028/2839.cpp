// 2025. 05. 31 기준 WA
#include <iostream>
#include <array>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

void solve() {
    int N;
    cin >> N;

    array<int, 5001> dp;
    dp[3] = 1;
    dp[4] = 0;
    dp[5] = 1;
    for (int i = 6; i <= 5000; i++) {
        dp[i] = min({dp[i - 3], dp[i - 5], dp[i - 3] + dp[i - 5]}) + 1;
    }
    cout << (dp[N] != 0 ? dp[N] : -1) << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}