// https://atcoder.jp/contests/abc014/submissions/4887049

#include <iostream>
using namespace std;

int main() {
    int n, X;
    cin >> n >> X;

    int m, a[n];
    m = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[n];

        if (X >> i & 1) {
            m += a[n];
        }
    }

    cout << m << endl;
}