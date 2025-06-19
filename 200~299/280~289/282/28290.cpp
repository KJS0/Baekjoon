#include <iostream>
#include <string>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    string S; cin >> S;
    if (S == "fdsajkl;" || S == "jkl;fdsa") cout << "in-out" << endl;
    else if (S == "asdf;lkj" || S == ";lkjasdf") cout << "out-in" << endl;
    else if (S == "asdfjkl;") cout << "stairs" << endl;
    else if (S == ";lkjfdsa") cout << "reverse" << endl;
    else cout << "molu" << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}