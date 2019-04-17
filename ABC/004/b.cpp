// https://atcoder.jp/contests/abc004/submissions/4864603

#include <iostream>
using namespace std;

int main() {
    char c[16];

    for (int i = 0; i < 16; i++) {
        cin >> c[i];
    }

    for (int i = 15; i >= 0; i--) {
        if (i % 4 == 0) {
            cout << c[i] << endl;
        } else {
            cout << c[i] << " ";
        }
    }
}