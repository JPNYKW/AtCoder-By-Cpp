// https://atcoder.jp/contests/abc138/submissions/7240953

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    float ans = 0.0;
    for (int i = 0; i < N; i++) {
        float x;
        cin >> x;
        ans += 1 / x;
    }

    cout << (1 / ans) << endl;
}
