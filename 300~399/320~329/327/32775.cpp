#include <iostream>
using namespace std;
int main() {
    int S_ab, F_ab;
    cin >> S_ab >> F_ab;
    cout << (S_ab <= F_ab ? "high speed rail" : "flight") << endl;
}