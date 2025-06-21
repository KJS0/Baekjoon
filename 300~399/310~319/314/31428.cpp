#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    int N; cin >> N;
    vector<char> V(N); for (auto& ch : V) cin >> ch;
    char track; cin >> track;
    cout << count(all(V), track) << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}