#include <iostream>
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
        int n1, n2;
        cin >> n1;
        cin >> n2;

        int mode; // -1 : descending, 0 : mixed, 1 : ascending

        if (n1 - n2 == 1) mode = -1;
        else if (n1 - n2 == -1) mode = 1;
        for (int i = 3; i <= 8; i++) {
            n1 = n2;
            cin >> n2;
            if (abs(n1 - n2) != 1) {
                mode = 0;
                break;
            }
        }

        if (mode == -1) cout << "descending" << endl;
        else if (mode == 0) cout << "mixed" << endl;
        else if (mode == 1) cout << "ascending" << endl;
    }
}