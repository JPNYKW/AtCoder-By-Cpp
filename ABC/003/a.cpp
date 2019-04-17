// https://atcoder.jp/contests/abc003/submissions/4855560

#include <iostream>
#include <regex>
using namespace std;

int main() {
    int N;
    cin >> N;

    float M;
    M = (N - 1) * (float(N) / 2) + N;
    M = M * 10000 / N;
    cout << M << endl;
}