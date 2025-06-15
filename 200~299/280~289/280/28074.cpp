#include <iostream>
#include <map>
#include <string>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    map<char, int> MOBIS = {
        {'M', 0}, {'O', 0}, {'B', 0}, {'I', 0}, {'S', 0}
    };

    string str; cin >> str;
    for (const auto& s : str) {
        MOBIS[s]++;
    }

    bool ans = true;
    for (const auto& mobis : MOBIS) {
        if (mobis.second <= 0) ans = false;
    }
    cout << (ans ? "YES" : "NO") << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}