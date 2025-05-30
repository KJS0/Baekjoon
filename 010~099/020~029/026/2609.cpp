#include <iostream>
#include <numeric>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    cout << lcm(a, b) << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}