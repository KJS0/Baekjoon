#include <iostream>
#include <queue>
#include <string>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

void solve() {
    int N;
    cin >> N;

    queue<int> q;
    while (N--) {
        string str;
        cin >> str;

        if (str == "push") {
            int X;
            cin >> X;
            q.push(X);
        } else if (str == "pop") {
            if (q.empty()) cout << -1 << endl;
            else {
                cout << q.front() << endl;
                q.pop();
            }
        } else if (str == "size") {
            cout << q.size() << endl;
        } else if (str == "empty") {
            cout << q.empty() << endl;
        } else if (str == "front") {
            if (q.empty()) cout << -1 << endl;
            else cout << q.front() << endl;
        } else if (str == "back") {
            if (q.empty()) cout << -1 << endl;
            else cout << q.back() << endl;
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