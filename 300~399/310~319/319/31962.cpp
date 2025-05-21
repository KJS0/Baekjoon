#include <iostream>
using namespace std;
int main() {
    int N, X;
    cin >> N >> X;
    int ans = -1;
    int time = 1;
    for (int i = 1; i <= N; i++) {
        int S, T;
        cin >> S >> T;
        if (S + T <= X && S >= time) {
            ans = S;
            time = S;
        }
    }
    cout << ans << endl;
}