// https://atcoder.jp/contests/abc010/submissions/4874986

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[10] = {0, 1, 0, 1, 2, 3, 0, 1, 0, 1};

    int x[n], y;
    y = 0;

    for (int i = 0; i < n; i++) {
        cin >> x[i];
        y += a[x[i] - 1];
    }

    cout << y << endl;
}