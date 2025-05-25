#include <iostream>
#include <vector>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using namespace std;
int main() {
    FASTIO

    int N;
    cin >> N;

    vector<int> V(N);
    for (int& num : V) {
        cin >> num;
    }

    int v;
    cin >> v;
    cout << count(all(V), v) << endl;
}