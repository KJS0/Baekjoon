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
        int N;
        cin >> N;

        int min_num = 1000000;
        int max_num = -1000000;
        
        while (N--) {
            int num;
            cin >> num;
            min_num = min(num, min_num);
            max_num = max(num, max_num);
        }

        cout << min_num << ' ' << max_num << endl;
    }
}