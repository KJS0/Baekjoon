#include <iostream>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    int A, B; cin >> A >> B;
    cout << min(A / 2, B) << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}