#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

void solve() {
    int N;
    cin >> N;

    vector<int> lst(N);
    for (auto& score : lst) {
        cin >> score;
    }

    int sum_num = accumulate(all(lst), 0);
    int max_num = *max_element(all(lst));
    
    double ans = sum_num / (double)max_num * 100 / N;
    cout.precision(2);
    cout << fixed << ans << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}