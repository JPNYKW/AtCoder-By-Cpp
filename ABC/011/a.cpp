// https://atcoder.jp/contests/abc011/submissions/4875069

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    cout << (N == 11 ? 12 : (N + 1) % 12) << endl;
}