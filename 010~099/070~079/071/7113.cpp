#include <iostream>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    int N, M; cin >> N >> M;
    int cnt = 0;
    while (M != 0) {
        cnt += N / M;
        int tmp = N % M;
        N = M;
        M = tmp;
    }
    cout << cnt << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}