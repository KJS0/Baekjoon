#include <iostream>
#include <algorithm>
#include <vector>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

void solve() {
    int N;
    cin >> N;

    vector<int> V(N);
    for (auto& i : V) {
        cin >> i;
    }

    sort(all(V));
    for (const auto& ans : V) {
        cout << ans << endl;
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