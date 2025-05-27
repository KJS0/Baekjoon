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
    //cin >> T;
    while (T--) {
        string str;
        getline(cin, str);

        int word = 0;
        if (str != "" && count(all(str), ' ') != str.size()) word += 1;
        for (int i = 1; i < str.size() - 1; i++) {
            if (str[i - 1] != ' ' && str[i] == ' ' && str[i + 1] != ' ') {
                word++;
            }
        }
        cout << word << endl;
    }
}