#include <iostream>
#include <algorithm>
#include <string>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;

    string S;
    cin >> S;

    int ans = 0;
    const string vowels = "aeiou";
    for (const auto& vowel : vowels) {
        ans += count(all(S), vowel);
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