// https://atcoder.jp/contests/abc011/submissions/4876009

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string S, T;
    cin >> S;

    T = S;
    transform(S.begin(), S.end(), S.begin(), ::tolower);
    transform(T.begin(), T.end(), T.begin(), ::toupper);

    cout << T[0] << S.substr(1, S.length()) << endl;
}