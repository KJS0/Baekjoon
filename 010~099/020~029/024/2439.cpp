#include <iostream>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

int main() {
    FASTIO
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = N - i; j > 0; j--) {
            cout << ' ';
        }

        for (int j = i; j > 0; j--) {
            cout << '*';
        }
        cout << endl;
    }
}