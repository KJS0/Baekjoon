#include <iostream>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

int main() {
    FASTIO
    int H, M;
    cin >> H >> M;

    int time = H * 60 + M - 45;
    if (time < 0) time += 24 * 60;
    cout << time / 60 << ' ' << time % 60 << endl;
}