// https://atcoder.jp/contests/abc017/submissions/4887963

#include <iostream>
using namespace std;

int main() {
    float s[3], e[3];
    for (int i = 0; i < 3; i++) {
        cin >> s[i];
        cin >> e[i];
    }

    float x = 0;
    for (int i = 0; i < 3; i++) {
        x += s[i] * (e[i] * 0.1);
    }

    cout << x << endl;
}