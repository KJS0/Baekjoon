#include <iostream>
#include <algorithm>
#include <string>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

void solve() {
    int N;
    cin >> N;

    int num = 0;
    while (N != 0) {
        num++;
        if (to_string(num).contains("666")) N--;
    }
    cout << num << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}