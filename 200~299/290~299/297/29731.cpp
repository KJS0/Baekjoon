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
    const array<string, 7> RICK = {
        "Never gonna give you up",
        "Never gonna let you down",
        "Never gonna run around and desert you",
        "Never gonna make you cry",
        "Never gonna say goodbye",
        "Never gonna tell a lie and hurt you",
        "Never gonna stop"
    };

    int N; cin >> N;
    cin.ignore();
    
    bool flag = false;
    for (int i = 1; i <= N; i++) {
        string S; getline(cin, S);
        if (!count(all(RICK), S)) {
            flag = true;
            break;
        }
    }
    cout << (flag ? "Yes" : "No") << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}