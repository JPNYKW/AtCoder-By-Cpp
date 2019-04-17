// https://atcoder.jp/contests/abc124/submissions/4955369
// 人生初 C問題AC（ABC、ノーミス3完達成）

#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    char odd, even;
    even = S[0];
    odd = even == '1' ? '0' : '1';

    int l, m;
    l = S.length();
    m = 0;

    for (int i = 1; i < l; i++) {
        if (i % 2 == 1) {
            if (S[i] != odd) m ++;
        } else {
            if (S[i] != even) m ++;
        }
    }

    cout << m << endl;
}