#include <iostream>
#include <vector>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using namespace std;
int main() {
    FASTIO
    vector<bool> students(30, false);
    for (int i = 1; i <= 28; i++) {
        int num;
        cin >> num;
        students[num - 1] = true;
    }

    for (int i = 0; i < 30; i++) {
        if (!students[i]) cout << i + 1 << endl; 
    }
}