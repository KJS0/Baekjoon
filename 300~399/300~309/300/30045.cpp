#include <iostream>
#include <string>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    int N; cin >> N;
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        string S; cin >> S;
        bool flag = false;
        for (size_t i = 0; S.size() >= 2 && i <= S.size() - 1; i++) {
            if (S.substr(i, 2) == "01" || S.substr(i, 2) == "OI") flag = true;
        }
        ans += flag;
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