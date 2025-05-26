#include <iostream>
#include <string>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

int main() {
    FASTIO
    int A, B, C;
    cin >> A >> B >> C;
    cout << A + B - C << endl;
    cout << stoi(to_string(A) + to_string(B)) - C << endl;
}