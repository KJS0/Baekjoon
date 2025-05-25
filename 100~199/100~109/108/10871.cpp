#include <iostream>
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using namespace std;
int main() {
    FASTIO
    
    int N, X;
    cin >> N >> X;

    for (int i = 1; i <= N; i++) {
        int num;
        cin >> num;
        if (num < X) cout << num << ' ';
    }
    cout << endl;
}