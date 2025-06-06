#include <iostream>
#include <array>
#include <algorithm>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    array<ll, 3> A, B;
    for (auto& a : A) cin >> a;
    for (auto& b : B) cin >> b;

    sort(all(A)); sort(all(B));

    ll ans = 0;
    for (int i = 0; i < 3; i++) ans += A[i] * B[i];
    cout << ans << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}