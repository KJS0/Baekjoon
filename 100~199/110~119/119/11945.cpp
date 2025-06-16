#include <iostream>
#include <string>
#include <algorithm>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    int N, M; cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        string str; cin >> str;
        reverse(all(str));
        cout << str << endl;
    }
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}