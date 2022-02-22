#include <iostream>
#include <cmath>
using namespace std;

float series(float x) {
	float sum = 0;
	int n = 100;
	for (int i = 0; i <= n; i++) {
		sum += pow(-1, i) * pow(x, 2 * i) / tgamma(2 * i + 2);
	}
	return (sum);
}

int main()
{
	setlocale(LC_ALL, "RUS");
	float x;
	cout << "Введите х: ";
	cin >> x;
	cout << "Результат: " << series(x);
}

