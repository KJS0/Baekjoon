#include <iostream>
#include <algorithm>
#include <array>
#include <string>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    array<int, 26> alphabet;
    fill(all(alphabet), 0);
    string S; cin >> S;
    for (const auto& s : S) alphabet[s - 'a']++;
    for (const auto& a : alphabet) cout << a << ' ';
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