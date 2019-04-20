#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, dot, sharp;
    string S;

    cin >> N >> S;
    dot = sharp = 0;

    for (int i = 0; i < N; i++) {
        string T = S.substr(i, 1);
        if (T == "#") sharp ++;
        if (T == ".") dot ++;
    }

    cout << min(dot, sharp);
}