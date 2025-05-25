#include <iostream>
#include <string>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using namespace std;

int main() {
    FASTIO

    string str;
    cin >> str;

    for (char& ch : str) {
        if (ch >= 'a' && ch <= 'z') ch = ch - ('a' - 'A');
        else if (ch >= 'A' && ch <= 'Z') ch = ch + ('a' - 'A');
    }
    cout << str << endl;
}