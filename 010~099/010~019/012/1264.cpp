#include <iostream>
#include <array>
#include <string>
#include <algorithm>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    string S;
    const array<char, 10> moeums = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    while (true) {
        getline(cin, S);
        if (S == "#") break;

        int ans = 0;
        for (const auto& moeum : moeums) ans += count(all(S), moeum);
        cout << ans << endl;
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