#include <iostream>
#include <string>
#include <algorithm>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    
    if (count(all(s1), 'a') >= count(all(s2), 'a')) cout << "go" << endl;
    else cout << "no" << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}