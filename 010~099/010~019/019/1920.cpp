#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    int N; cin >> N;
    vector<int> A(N); for (auto& i : A) cin >> i;
    sort(all(A));

    int M; cin >> M;
    int num;
    for (int i = 0; i < M; i++) {
        cin >> num;
        cout << binary_search(all(A), num) << endl;
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