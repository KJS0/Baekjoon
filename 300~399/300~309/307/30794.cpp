#include <iostream>
#include <string>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    int lv; cin >> lv;
    string judge; cin >> judge;
    
    int score = 0;
    if (judge == "bad") score += 200 * lv;
    else if (judge == "cool") score += 400 * lv;
    else if (judge == "great") score += 600 * lv;
    else if (judge == "perfect") score += 1000 * lv;
    cout << score << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}