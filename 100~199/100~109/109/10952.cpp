#include <iostream>
using namespace std;
int main() {
    int A, B;
    do {
        cin >> A >> B;
        if (A != 0 && B != 0) {
            cout << A + B << endl;
        }
    } while (A != 0 && B != 0);
}