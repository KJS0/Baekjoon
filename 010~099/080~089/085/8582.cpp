#include <iostream>
#include <vector>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> w(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }

    vector<int> a(n + 1);
    a[1] = w[1];
    for (int i = 2; i <= n; i++) {
        a[i] = max(a[i - 1], w[i]);
    }

    vector<int> b(n + 1);
    b[n] = w[n];
    for (int i = n - 1; i >= 1; i--) {
        b[i] = max(b[i + 1], w[i]);
    }

    for (int i = 1; i <= n; i++) {
        cout << a[i] << ' ' << b[i] << endl;
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