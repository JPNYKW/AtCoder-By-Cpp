// https://atcoder.jp/contests/abc009/submissions/4873268

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);

    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());

    sort(A.begin(), A.end());
    reverse(A.begin(), A.end());

    cout << A.at(1) << endl;
}