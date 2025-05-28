#include <iostream>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

int main() {
    FASTIO
    int n;
    cin >> n;
    while (true) {
        int m;
        cin >> m;
        if (m == 0) break;

        if (m % n == 0) {
            cout << m << " is a multiple of " << n << "." << endl;
        } else {
            cout << m << " is NOT a multiple of " << n << "." << endl;
        }
    }
}