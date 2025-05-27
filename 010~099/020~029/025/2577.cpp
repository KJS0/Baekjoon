#include <iostream>
#include <array>
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
        int A, B, C;
        array<int, 10> num;
        fill(all(num), 0);
        cin >> A >> B >> C;

        for (const auto& ch : to_string(A * B * C)) {
            num[ch - '0']++;
        }
        
        for (int i = 0; i <= 9; i++) {
            cout << num[i] << endl;
        }
    }
}