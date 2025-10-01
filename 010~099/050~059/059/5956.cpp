#include <iostream>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

ll pow(int n, int m) {
    ll result = 1;
    while (m--) result *= n;
    return result;
}

void solve() {
    int N, M; cin >> N >> M;
    int cnt = 0;
    ll result = 0;
    while (true) {
        if (N % 2 == 0 || M % 2 == 0) break;
        result += pow(4, cnt++);

        if (N == 1 || M == 1) break;
        N /= 2; M /= 2;
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