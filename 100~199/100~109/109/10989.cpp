#include <iostream>
#include <algorithm>
#include <array>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

void solve() {
    int N;
    cin >> N;

    array<int, 10000> arr;
    fill(all(arr), 0);

    for (int i = 1; i <= N; i++) {
        int num;
        cin >> num;
        arr[num - 1]++;
    }

    for (int i = 1; i <= 10000; i++) {
        for (int j = 0; j < arr[i - 1]; j++) {
            cout << i << endl;
        }
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