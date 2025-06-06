#include <iostream>
#include <algorithm>
#include <array>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    array<int, 3> nums;
    for (auto& num : nums) cin >> num;

    sort(all(nums));
    
    for (const auto& num : nums) cout << num << ' ';
    cout << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}