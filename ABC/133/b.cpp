// https://atcoder.jp/contests/abc133/submissions/6274607

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    vector<vector<int>> X(N, vector<int>(D));
    for (int y = 0; y < N; y++) {
        for (int x = 0; x < D; x++) {
            cin >> X[y][x];
        }
    }

    int n = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i != j) {
                double dist = 0.0;
                for (int x = 0; x < D; x++) {
                    dist += pow(X[i][x] - X[j][x], 2.0);
                }

                dist = sqrt(dist);
                if (ceil(dist) == dist) {
                    n++;
                }
            }
        }
    }

    cout << n / 2 << endl;
}