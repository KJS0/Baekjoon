#include <iostream>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

int main() {
    FASTIO
    int N = 1;
    cin >> N;
    while (N--) {
        string str;
        cin >> str;
        cout << (str.size() >= 6 && str.size() <= 9 ? "yes" : "no") << endl; 
    }
}