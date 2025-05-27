#include <iostream>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using namespace std;

int main() {
    FASTIO
    int num, ans = 0;
    for (int i = 1; i <= 5; i++) {
        cin >> num;
        ans += num * num;
    }
    ans %= 10;
    cout << ans << endl;
}