#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c, n;
	cin >> a >> b >> c >> n;

	auto isGood = bool{ false };
	auto sum = int{ 0 };
	for (auto i = 0; a * i <= n; ++i) {
		for (auto j = 0; b * j <= n; ++j) {
			for (auto k = 0; c * k <= n; ++k) {
				sum = i * a + j * b + k * c;
				if (n == sum) {
					isGood = true;
				}
			}
		}
	}

	cout << (isGood ? 1 : 0);

	return 0;
}