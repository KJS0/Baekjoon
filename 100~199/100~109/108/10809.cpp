#include <iostream>
#include <algorithm>
#include <array>
#include <string>
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
        array<int, 26> alphabet;
        fill(all(alphabet), -1);

        string S;
        cin >> S;
        for (size_t i = 0; i < S.size(); i++) {
            auto& ch = S[i];
            auto& index = alphabet[ch - 'a'];
            if (index == -1) index = i;
        }

        for (const auto& num : alphabet) {
            cout << num << ' ';
        }
        cout << endl;
    }
}