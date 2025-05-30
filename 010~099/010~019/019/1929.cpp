#include <iostream>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

bool isPrime(const int& num) {
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return (num != 1);
}

void solve() {
    int M, N;
    cin >> M >> N;

    for (int i = M; i <= N; i++) {
        if (isPrime(i)) cout << i << endl;
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