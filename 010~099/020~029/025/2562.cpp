#include <iostream>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

int main() {
    FASTIO
    pair<int, int> max_nums = {1, 1};
    for (int i = 1; i <= 9; i++) {
        int num;
        cin >> num;
        
        if (num > max_nums.first) {
            max_nums = {num, i};
        }
    }
    cout << max_nums.first << endl;
    cout << max_nums.second << endl;
}