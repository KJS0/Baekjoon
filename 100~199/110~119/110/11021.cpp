#include <iostream>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;
int i;

void solve() {
    int A, B;
    cin >> A >> B;
    cout << "Case #" << i << ": " << A + B << endl;
}

int main() {
    FASTIO
    int T = 1;
    cin >> T;
    for (i = 1; i <= T; i++) {
        solve();
    }
}