// https://atcoder.jp/contests/abc016/submissions/4887537

#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    bool p = A + B == C;
    bool q = A - B == C;

    cout << (p && q ? "?" : p ? "+" : q ? "-" : "!") << endl;
}