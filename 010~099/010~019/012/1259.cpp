#include <iostream>
#include <string>
#include <algorithm>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

void solve() {
    int num;
    while (true) {
        cin >> num;
        if (num == 0) break;

        string str1 = to_string(num);
        string str2 = str1;
        reverse(all(str2));

        bool flag = (str1 == str2);
        cout << (flag ? "yes" : "no") << endl;
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