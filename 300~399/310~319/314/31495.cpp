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
    string S; getline(cin, S);
    if (S[0] == '"' && S[S.size() - 1] == '"' && S.size() >= 3) cout << S.substr(1, S.size() - 2) << endl;
    else cout << "CE" << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}