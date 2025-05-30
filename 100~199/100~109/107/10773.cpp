#include <iostream>
#include <stack>
#include <numeric>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

void solve() {
    int K;
    cin >> K;

    stack<int> S;
    while (K--) {
        int N;
        cin >> N;

        if (N != 0) S.push(N);
        else S.pop();
    }

    int sum = 0;
    while (!S.empty()) {
        sum += S.top();
        S.pop();
    }
    cout << sum << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}