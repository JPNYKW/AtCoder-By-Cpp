// https://atcoder.jp/contests/abc001/submissions/3710290

#include <iostream>
using namespace std;

int main() {
	float km;
	int m, vv;
	cin >> m;

	km = (float)m / 1000;

	if (km < 0.1) {
		vv = 0;
	} else if (km <= 5) {
		vv = km * 10;
	} else if (6 <= km && km <= 30) {
		vv = km + 50;
	} else if (35 <= km && km <= 70) {
		vv = (km - 30) / 5 + 80;
	} else if (70 < km) {
		vv = 89;
	}

	string svv;
	svv = std::to_string(vv);
	if (vv < 10) svv = "0" + svv;

	cout << svv << endl;
}