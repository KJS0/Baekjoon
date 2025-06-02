#include <iostream>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

void solve() {
    int n1, k1, n2, k2;
    cin >> n1 >> k1 >> n2 >> k2;
    cout << n1 * k1 + n2 * k2 << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}