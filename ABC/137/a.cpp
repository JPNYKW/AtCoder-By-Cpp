// https://atcoder.jp/contests/abc137/submissions/7241029

#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int x = A + B;
    int y = A - B;
    int z = A * B;

    int max = x;
    if (max < y) max = y;
    if (max < z) max = z;

    cout << max << endl;
}
