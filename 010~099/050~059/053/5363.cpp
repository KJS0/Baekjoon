#include <iostream>
#include <string>
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define FASTIO cin.tie(nullptr); ios::sync_with_stdio(false);
using ll = long long;
using namespace std;

int main() {
    FASTIO
    int N = 1;
    cin >> N;
    cin.ignore();
    while (N--) {
        string talk;
        getline(cin, talk);
        
        string ans = "";
        string word = "";
        pair<string, string> first_second_talk = {"", ""};
        for (int i = 0; i <= talk.size(); i++) {
            if (talk[i] != ' ' && i != talk.size()) word += talk[i];
            else {
                if (first_second_talk.first == "") first_second_talk.first = word;
                else if (first_second_talk.second == "") first_second_talk.second = word;
                else ans += word + " ";
                word = "";
            }
        }
        
        ans += first_second_talk.first + " ";
        ans += first_second_talk.second;
        cout << ans << endl;
    }
}