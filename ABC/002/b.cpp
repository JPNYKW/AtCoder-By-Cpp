// https://atcoder.jp/contests/abc002/submissions/4853211

#include <iostream>
#include <regex>
using namespace std;

int main() {
    string W;
    cin >> W;

    std::string w = std::regex_replace(W, std::regex("a|i|u|e|o"), "");
    cout << w << endl;
}