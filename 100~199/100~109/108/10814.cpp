#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <string>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

bool comp(const pair<int, string>& p1, const pair<int, string>& p2) {
    return (p1.first < p2.first);
}

void solve() {
    int N;
    cin >> N;

    vector<pair<int, string>> V(N);
    for (auto& p : V) {
        cin >> p.first >> p.second;
    }
    stable_sort(all(V), comp);

    for (const auto& p : V) {
        cout << p.first << ' ' << p.second << endl;
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