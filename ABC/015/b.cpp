// https://atcoder.jp/contests/abc015/submissions/4887421

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a[N];
    float x, y, z;
    x = y = 0;

    for (int i = 0; i < N; i++) {
        cin >> a[i];

        if (a[i] > 0) {
            x ++;
            y += a[i];
        }
    }

    z = y / x;
    if (int(z * 10) % 10 > 0) {
        z = int(z) + 1.0;
    }

    cout << z << endl;
}