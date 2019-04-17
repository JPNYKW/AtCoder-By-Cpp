// https://atcoder.jp/contests/abc006/submissions/4871530

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int t[1000000];
    t[0] = 0;
    t[1] = 0;
    t[2] = 1;

    for (int i = 3; i < 1000001; i++) {
        t[i] = (t[i - 1] + t[i - 2] + t[i - 3]) % 10007;
    }

    cout << t[n - 1] << endl;
}