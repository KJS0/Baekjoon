#include <iostream>
#include <string>
#include <map>
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
        cin >> str;
        map<string, string> school = {
            {"NLCS", "North London Collegiate School"},
            {"BHA", "Branksome Hall Asia"},
            {"KIS", "Korea International School"},
            {"SJA", "St. Johnsbury Academy"}
        };
        cout << school[str] << endl;
    }
}