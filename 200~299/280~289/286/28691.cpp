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
    map<char, string> dongari_list = {
        {'M', "MatKor"},
        {'W', "WiCys"},
        {'C', "CyKor"},
        {'A', "AlKor"},
        {'$', "$clear"}
    };

    char dongari;
    cin >> dongari;
    cout << dongari_list[dongari] << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}