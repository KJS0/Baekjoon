#include <iostream>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;
    cout << x + y << endl;
}

int main() {
    FASTIO
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
}