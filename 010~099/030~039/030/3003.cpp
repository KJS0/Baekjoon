#include <iostream>
#include <array>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

void solve() {
    array<int, 6> chess;
    const array<int, 6> piece = {1, 1, 2, 2, 2, 8};
    for (auto& num : chess) {
        cin >> num;
    }

    for (int i = 0; i < 6; i++) {
        cout << piece[i] - chess[i] << ' ';
    }
    cout << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}