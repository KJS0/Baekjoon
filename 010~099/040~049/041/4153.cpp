#include <iostream>
#include <array>
#include <algorithm>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

void solve() {
    int a, b, c;
    while (true) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) break;

        array<int, 3> side = {a * a, b * b, c * c};
        sort(all(side));
        bool flag = (side[0] + side[1] == side[2]);
        cout << (flag ? "right" : "wrong") << endl;
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