#include <iostream>
#include <set>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        set<int> S;
        for (int i = 1; i <= 10; i++) {
            int num;
            cin >> num;
            S.insert(num % 42);
        }
        cout << S.size() << endl;
    }
}