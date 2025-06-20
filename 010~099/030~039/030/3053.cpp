#include <iostream>
#include <numbers>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;
const double PI = numbers::pi;

void solve() {
    int R; cin >> R;
    double area1 = PI * R * R;
    double area2 = 2.0 * R * R;
    cout.precision(6);
    cout << fixed << area1 << endl;
    cout << fixed << area2 << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}