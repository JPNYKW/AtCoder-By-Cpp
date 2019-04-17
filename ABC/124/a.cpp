// https://atcoder.jp/contests/abc124/submissions/4949420

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int C, D;
    D = 0;

    for (int i = 0; i < 2; i++) {
        C = max(A, B);
        D += C;

        if (C == A) {
            A --;
        } else {
            B --;
        }
    }

    cout << D << endl;
}