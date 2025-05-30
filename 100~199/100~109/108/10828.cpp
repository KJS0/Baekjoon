#include <iostream>
#include <stack>
#include <string>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

void solve() {
    int N;
    cin >> N;

    stack<int> s;
    while (N--) {
        string str;
        cin >> str;

        if (str == "push") {
            int n;
            cin >> n;
            s.push(n);
        } else if (str == "pop") {
            if (s.empty()) cout << -1 << endl;
            else {
                cout << s.top() << endl;
                s.pop();
            }
        } else if (str == "size") {
            cout << s.size() << endl;
        } else if (str == "empty") {
            cout << s.empty() << endl;
        } else if (str == "top") {
            if (s.empty()) cout << -1 << endl;
            else {
                cout << s.top() << endl;
            }
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