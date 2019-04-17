// https://atcoder.jp/contests/abc124/submissions/4950526

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int H[N];
    for (int i = 0; i < N; i++) cin >> H[i];

    int x, y;
    x = H[0];
    y = 1;

    for (int i = 1; i < N; i++) {
        if (x <= H[i]) {
            x = H[i];
            y ++;
        }
    }

    cout << y << endl;
}