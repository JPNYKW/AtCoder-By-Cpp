// https://atcoder.jp/contests/abc013/submissions/4879801

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int x, y;
    x = max(a, b);
	y = min(a, b);

    int n, m;
	n = 10 - x + y;
	m = x - y;

    cout << (n > m ? m : n) << endl;
}