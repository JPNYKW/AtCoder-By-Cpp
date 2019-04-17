// https://atcoder.jp/contests/abc008/submissions/4873058

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int C[N];
    string T[N];
    for (int i = 0; i < N; i++) {
        cin >> T[i];
        C[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (T[i] == T[j]) {
                C[i] ++;
            }
        }
    }

    int max, id;
    max = id = 0;

    for (int i = 0; i < N; i++) {
        if (max < C[i]) {
            max = C[i];
            id = i;
        }
    }

    cout << T[id] << endl;
}