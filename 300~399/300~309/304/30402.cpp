#include <iostream>
#include <array>
#include <string>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            char ch;
            cin >> ch;

            if (ch == 'w') {
                cout << "chunbae" << endl;
                return;
            } else if (ch == 'b') {
                cout << "nabi" << endl;
                return;
            } else if (ch == 'g') {
                cout << "yeongcheol" << endl;
                return;
            }
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