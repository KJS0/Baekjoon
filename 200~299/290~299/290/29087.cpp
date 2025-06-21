#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    string str; cin >> str;
    vector<int> V(n + 1);
    V[1] = str[0] == 'a' || str[0] == 'h';
    for (int i = 2; i <= n; i++) {
        if ((str[i - 2] == 'a' && str[i - 1] == 'h') || (str[i - 2] == 'h' && str[i - 1] == 'a')) V[i] = max(V[i - 1] + 1, 2);
        else if (str[i - 1] == 'a' || str[i - 1] == 'h') V[i] = 1;
        else V[i] = 0;
    }
    cout << *max_element(all(V)) << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}