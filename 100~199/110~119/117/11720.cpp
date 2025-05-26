#include <iostream>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

int main() {
    FASTIO
    int N;
    cin >> N;

    string nums;
    cin >> nums;

    int ans = 0;
    for (const auto& ch : nums) {
        ans += ch - '0';
    }
    cout << ans << endl;
}