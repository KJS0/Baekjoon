#include <iostream>
#include <vector>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    int N;
    cin >> N;

    vector<double> seq(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> seq[i];
    }

    vector<double> dp(N + 1);
    dp[1] = seq[1];
    for (int i = 2; i <= N; i++) {
        if (dp[i - 1] >= dp[i - 1] * seq[i]) dp[i] = 1.0;
        else dp[i] = dp[i - 1] * seq[i];
    }

    cout.precision(3);
    cout << fixed << dp[N] << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}