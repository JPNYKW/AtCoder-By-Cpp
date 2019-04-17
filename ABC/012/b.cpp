// https://atcoder.jp/contests/abc012/submissions/4876965

#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    int h, m, s;
    h = N / 3600;
    m = (N / 60) % 60;
    s = N % 60;

    string sh, sm, ss;
    sh = (h < 10 ? "0" : "") + to_string(h);
    sm = (m < 10 ? "0" : "") + to_string(m);
    ss = (s < 10 ? "0" : "") + to_string(s);

    cout << sh << ":" << sm << ":" << ss << endl;
}