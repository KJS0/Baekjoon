#include <iostream>
using namespace std;
int main() {
    int A, B;
    do {
        cin >> A >> B;
        if (!cin.eof()) {
            cout << A + B << endl;
        }
    } while (!cin.eof());
}