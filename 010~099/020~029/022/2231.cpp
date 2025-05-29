#include <iostream>
#include <string>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

void solve() {
    int N;
    cin >> N;

    int M = 0;
    for (int i = 1; i <= N; i++) {
        int swift = i;
        for (const auto& ch : to_string(i)) {
            swift += (ch - '0');
        }

        if (swift == N) {
            M = i;
            break;
        }
    }
    cout << M << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}