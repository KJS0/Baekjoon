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

    array<int, 1001> dp;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 1;
    for (int i = 4; i <= 1000; i++) {
        dp[i] = min(dp[i - 1], dp[i - 3]) + 1;
    }

    if (dp[N] % 2 == 1) cout << "CY" << endl;
    else cout << "SK" << endl; 
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}