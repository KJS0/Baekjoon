#include <iostream>
#include <array>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;
int i;

void solve() {
    int C, V, L;
    cin >> C >> V >> L;

    array<int, 16> cases;
    cases[1] = 1;
    cases[2] = 2;
    
    for (int i = 3; i <= 15; i++) {
        cases[i] = cases[i - 1] % MOD + cases[i - 2] % MOD;
        cases[i] %= MOD;
    }
    
    cout << "Case #" << i << ": " << cases[L] << endl;
}

int main() {
    FASTIO
    int T = 15;
    //cin >> T;
    for (i = 1; i <= T; i++) {
        solve();
    }
}