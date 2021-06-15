#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, m, x, y;
		cin >> n >> m >> x >> y;
		if (n * m > 1) {
			// find the minimum value between 'x' and 'y' and store it to 'x'
			x = min(x, y);
		}
		// find the minimum between 'y' and 2 times 'x' (or the sum of adding 'x' to itself)
		y = min(y, 2 * x);
		// imagine a checkerboard pattern, and we will fill the black squares with the maximum 
		// value, white the white squares will contain the minimum value that must be added
		// ('n' * 'm' + 1) / 2 * 'x') = pertains to the black squares (larger value)
		// ('n' * 'm') / 2 * ('y' - 'x') = pertains to the white squares (smaller value)
		cout << (n * m + 1) / 2 * x + (n * m) / 2 * (y - x) << '\n';
	}
	return 0;
}
