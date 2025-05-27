#include <iostream>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

int main() {
    FASTIO
    int T = 1;
    cin >> T;

    while (T--) {
        int H, W, N;
        cin >> H >> W >> N;

        int ans = ((N - 1) % H + 1) * 100 + ((N - 1) / H + 1);
        cout << ans << endl;
    }
}