#include<iostream>
#include<cmath>
using namespace std;


void deltaN(int N, int T, int t) {
	float percent = 0;
	int delta = 0;
	delta = N * (1 - exp((-1 * t) * log(2) / T));
	percent = delta / float(N) * 100;
	cout << "Количество распвшихся ядер: " << delta << endl;
	cout << "В процентном соотношении: " << percent << "%";
}

int main() {
	setlocale(LC_ALL, "Russian");
	int N, T, t;
	cout << "Введите исходное количество атомов:";
	cin >> N;
	cout << "Введите период полураспада:";
	cin >> T;
	cout << "Введите время:";
	cin >> t;
	if (N>= 0 and T>=0 and t>=0){
		deltaN(N, T, t);
	}
	else {
		cout << "Время чило атомов и период полураспада должны быть положительными!";
	}
}

