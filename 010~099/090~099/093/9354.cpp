#include <iostream>
#include <vector>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

void solve() {
    int N;
    cin >> N;

    vector<int> S(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> S[i];
    }

    vector<char> D(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> D[i];
    }

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        if (D[i] == 'T') ans += S[i];
        else if (D[i] == 'A') ans -= S[i];
    }

    cout << ans << endl;
}

int main() {
    FASTIO
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
}