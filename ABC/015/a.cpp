// https://atcoder.jp/contests/abc015/submissions/4887322

#include <iostream>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    cout << (A.length() > B.length() ? A : B) << endl;
}