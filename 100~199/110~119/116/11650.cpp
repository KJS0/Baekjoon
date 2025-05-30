#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

void solve() {
    int N;
    cin >> N;

    vector<pair<int, int>> coords(N);
    for (auto& coord : coords) {
        cin >> coord.first >> coord.second;
    }
    sort(all(coords));

    for (const auto& coord : coords) {
        cout << coord.first << ' ' << coord.second << endl;
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