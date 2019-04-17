#include <iostream>
using namespace std;

int main() {
    int base[3], rank[3];

    for (int i = 0; i < 3; i++) {
        cin >> base[i];
        rank[i] = i + 1;
    }

    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 2; i++) {
            if (base[i] < base[i + 1]) {
                int temp = base[i];
                base[i] = base[i + 1];
                base[i + 1] = temp;

                temp = rank[i];
                rank[i] = rank[i + 1];
                rank[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++) cout << rank[i] << endl;
}