#include <iostream>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    int L, P;
    cin >> L >> P;

    for (int i = 1; i <= 5; i++) {
        int N;
        cin >> N;
        cout << N - L * P << ' ';
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