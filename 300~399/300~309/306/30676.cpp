#include <iostream>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    int lambda; cin >> lambda;
    if (lambda >= 620) cout << "Red" << endl;
    else if (lambda >= 590) cout << "Orange" << endl;
    else if (lambda >= 570) cout << "Yellow" << endl;
    else if (lambda >= 495) cout << "Green" << endl;
    else if (lambda >= 450) cout << "Blue" << endl;
    else if (lambda >= 425) cout << "Indigo" << endl;
    else cout << "Violet" << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}