#include <iostream>
#include <string>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    string str; cin >> str;
    size_t diff = str.size();
    for (string::iterator it = str.begin(); it < str.end(); it++) {
        char ch = *it;
        if (ch == '_') diff += 5;
        else if (ch == ':') diff += 1;
    }
    cout << diff << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}