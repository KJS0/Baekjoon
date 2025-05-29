#include <iostream>
#include <string>
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
        string OX;
        cin >> OX;

        int score = 0;
        int add = 1;
        for (const auto& ch : OX) {
            if (ch == 'O') {
                score += add++;
            } else {
                add = 1;
            }
        }
        cout << score << endl;
    }
}