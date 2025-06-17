#include <iostream>
#include <string>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    string str; cin >> str;
    int ans = 0;
    for (size_t i = 0; i <= str.size() - 4; i++) {
        if (str.size() < 4) break;
        ans += (str.substr(i, 4) == "DKSH");
    }
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