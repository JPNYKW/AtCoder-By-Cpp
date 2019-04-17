// https://atcoder.jp/contests/abc017/submissions/4903521

#include <iostream>
using namespace std;

int main() {
    string X;
    cin >> X;

    int l = X.length();
    string Y = X + "u";

    bool isChoku = true;
    for (int i = 0; i < l; i++) {
        if (Y[i] == 'c' && Y[i + 1] == 'h') {
            i ++;
        } else if (isChoku && (!(Y[i] == 'c' && Y[i + 1] == 'h') && Y[i] != 'o' && Y[i] != 'k' && Y[i] != 'u')) {
            isChoku = false;
        }
    }

    cout << (isChoku ? "YES" : "NO") << endl;
}