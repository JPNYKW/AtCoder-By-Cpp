// https://atcoder.jp/contests/abc014/submissions/4879927

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b;

    if (a % b == 0) {
        cout << 0 << endl;
    } else {
        c = a;
        while (c % b > 0) c++;
        cout << c - a << endl;
    }
}