#include <iostream>
#include <string>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    string jinho; cin >> jinho;
    int N; cin >> N;
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        string mbti; cin >> mbti;
        if (jinho == mbti) ans++;
    }
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