#include <iostream>
#include <algorithm>
#include <array>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    array<int, 4> cents = {25, 10, 5, 1};
    int C;
    cin >> C;

    array<int, 4> ans;
    fill(all(ans), 0);
    for (int i = 0; i <= 3; i++) {
        ans[i] = C / cents[i];
        C %= cents[i];
    }

    for (const auto& answer : ans) {
        cout << answer << ' ';
    }
    cout << endl;
}

int main() {
    FASTIO
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
}