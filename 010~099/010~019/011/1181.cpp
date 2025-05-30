#include <iostream>
#include <string>
#include <set>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

struct cmp {
    bool operator()(const string& a, const string& b) const {
        if (a.size() == b.size()) return a < b;
        return a.size() < b.size();
    }
};

void solve() {
    int N;
    cin >> N;

    set<string, cmp> s; 
    while (N--) {
        string str;
        cin >> str;
        s.insert(str);
    }

    for (const auto& str : s) {
        cout << str << endl;
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