// https://atcoder.jp/contests/abc019/submissions/5672457

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<int> abc(3);
    for (int i = 0; i < 3; i++) cin >> abc.at(i);
    
    sort(abc.begin(), abc.end());
    cout << abc[1] << endl;
}
