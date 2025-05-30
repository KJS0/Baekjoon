#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

void solve() {
    ll num = 0;
    for (int i = 3; i >= 1; i--) {
        string str;
        cin >> str;
        if (all_of(all(str), ::isdigit)) {
            num = stoll(str) + i;
        }
    }

    if (num % 3 == 0 && num % 5 == 0) cout << "FizzBuzz" << endl;
    else if (num % 3 == 0 && num % 5 != 0) cout << "Fizz" << endl;
    else if (num % 5 == 0 && num % 3 != 0) cout << "Buzz" << endl;
    else cout << num << endl;
}

int main() {
    FASTIO
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
}