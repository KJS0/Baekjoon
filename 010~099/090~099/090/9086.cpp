#include <iostream>
#include <string>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using namespace std;

int main() {
    FASTIO
    int T;
    cin >> T;

    while (T--) {
        string str;
        cin >> str;
        cout << str[0] << str[str.size() - 1] << endl;
    }
}