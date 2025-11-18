#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    int N, K; cin >> N >> K;

    int pixel[10][10] = {0};
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> pixel[i][j];
        }
    }

    int result[100][100] = {0};
    for (int i = 0; i < N * K; i++) {
        for (int j = 0; j < N * K; j++) {
            result[i][j] = pixel[i / K][j / K];
        }
    }

    for (int x = 0; x < N * K; x++) {
        for (int y = 0; y < N * K; y++) {
            cout << result[x][y] << ' ';
        }
        cout << endl;
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