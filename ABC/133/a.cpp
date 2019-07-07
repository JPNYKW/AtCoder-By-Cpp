// https://atcoder.jp/contests/abc133/submissions/6267815

#include <iostream>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    cout << (N * A < B ? N * A : B) << endl;
}