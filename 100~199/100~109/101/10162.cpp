#include <iostream>
#include <array>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    int T; cin >> T;
    int t = T;
    array<int, 3> time = {300, 60, 10};
    array<int, 3> ABC;

    for (int i = 0; i < 3; i++) {
        ABC[i] = t / time[i];
        t %= time[i];
    }
    
    int check = 0;
    for (int i = 0; i < 3; i++) {
        check += ABC[i] * time[i];
    }

    if (check == T) {
        for (const auto& i : ABC) {
            cout << i << ' ';
        }
        cout << endl;
    } else {
        cout << -1 << endl;
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