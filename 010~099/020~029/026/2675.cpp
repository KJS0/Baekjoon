#include <iostream>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

int main() {
    FASTIO
    int T = 1;
    cin >> T;
    while (T--) {
        int R;
        string S;
        cin >> R >> S;

        for (const auto& ch : S) {
            for (int i = 1; i <= R; i++) {
                cout << ch;
            }
        }
        cout << endl;
    }
}