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
    int N;
    cin >> N;

    vector<int> sequence(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> sequence[i];
    }

    vector<int> inc(N + 1), desc(N + 1);
    inc[1] = 1;
    desc[1] = 1;
    for (int i = 2; i <= N; i++) {
        inc[i] = sequence[i] >= sequence[i - 1] ? inc[i - 1] + 1 : 1;
        desc[i] = sequence[i] <= sequence[i - 1] ? desc[i - 1] + 1 : 1;
    }

    int ans = max(*max_element(all(inc)), *max_element(all(desc)));
    cout << ans << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}