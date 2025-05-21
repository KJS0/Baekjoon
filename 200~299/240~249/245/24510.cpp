#include <iostream>
#include <string>
using namespace std;

int findString(string originStr, const string findStr) {
    int result = 0;
    size_t pos = 0;
    while ((pos = originStr.find(findStr, pos)) != string::npos) {
        pos += findStr.size();
        result++;
    }
    return result;
}

int main() {
    int C;
    cin >> C;

    int ans = 0;
    while (C--) {
        string code;
        cin >> code;
        ans = max(ans, findString(code, "for") + findString(code, "while"));
    }
    cout << ans << endl;
}