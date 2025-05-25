#include <iostream>
#include <vector>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using namespace std;
int main() {
    FASTIO

    int N, M;
    cin >> N >> M;

    vector<vector<int>> M1(N, vector<int>(M));
    vector<vector<int>> M2(N, vector<int>(M));
    for (vector<int>& A : M1) {
        for (int& B : A) {
            cin >> B;
        }
    }

    for (vector<int>& A : M2) {
        for (int& B : A) {
            cin >> B;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << M1[i][j] + M2[i][j] << ' ';
        }
        cout << endl;
    }
}