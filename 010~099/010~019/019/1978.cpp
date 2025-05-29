#include <iostream>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return (n != 1);
}

void solve() {
    int N;
    cin >> N;

    int ans = 0;
    while (N--) {
        int num;
        cin >> num;
        if (isPrime(num)) ans++;
    }
    cout << ans << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}