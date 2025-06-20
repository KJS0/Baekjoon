#include <iostream>
#include <algorithm>
#include <string>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    int N; cin >> N;
    for (int i = 1; i <= N; i++) {
        string S; cin >> S;
        if (count(all(S), 'S') >= 1) {
            cout << S << endl;
            break;
        }
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