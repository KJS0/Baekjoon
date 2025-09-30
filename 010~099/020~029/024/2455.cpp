#include <iostream>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    int N, M;
    int cnt = 0, result = 0;
    for (int i = 1; i <= 4; i++) {
        cin >> N >> M;
        cnt = cnt - N + M;
        result = max(result, cnt);
    }
    cout << result << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}