#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    vector<pair<int, int>> scoreboard = {
        {12, 1600}, {11, 894}, {11, 1327}, {10, 1311},
        {9, 1004}, {9, 1178}, {9, 1357}, {8, 837},
        {7, 1055}, {6, 556}, {6, 773}};
    int N; cin >> N;
    cout << scoreboard[N - 1].first << ' ' << scoreboard[N - 1].second << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}