#include <iostream>
#include <string>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

ll power(int base, int exponent, const int MOD) {
    ll result = 1;
    for (int i = 1; i <= exponent; i++) {
        result = (result * base) % MOD;
    }
    result %= MOD;
    return result;
}

ll getHash(string& s, int len, int r, const int M) {
    ll result = 0;
    for (int i = 0; i < len; i++) {
        int a = (s[i] - 'a' + 1);
        result += a * power(r, i, M);
        result %= M;
    }
    result %= M;
    return result;
}

void solve() {
    int r = 31;
    int M = 1234567891;

    int L;
    cin >> L;

    string str;
    cin >> str;
    cout << getHash(str, L, r, M) << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}