// https://tenka1-2019-beginner.contest.atcoder.jp/submissions/5037831

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int d = min(A, B);
    int e = max(A, B);

    cout << (d < C && C < e ? "Yes" : "No") << endl;
}