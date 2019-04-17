// https://atcoder.jp/contests/abc003/submissions/4863906

#include <iostream>
#include <regex>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    int l;
    l = S.length();

    bool f;
    f = true;

    for (int i = 0; i < l; i++) {
        if (S[i] == '@' || T[i] == '@') {
            string U;
            U = (S[i] == '@' ? T[i] : S[i]);
            if (S[i] != T[i] && std::regex_match(U, std::regex("a|t|c|o|d|e|r")) == false) {
                f = false;
            }
        } else if (S[i] != T[i]) {
            f = false;
        }
    }

    cout << (f ? "You can win" : "You will lose") << endl;
}