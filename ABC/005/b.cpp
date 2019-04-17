// https://atcoder.jp/contests/abc005/submissions/4865202

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int T[N];
    for (int i = 0; i < N; i++) cin >> T[i];

    int M = 101;
    for (int i = 0; i < N; i++) {
        if (T[i] < M) M = T[i];
    }

    cout << M << endl;
}