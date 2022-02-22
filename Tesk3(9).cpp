#include<iostream>
#include<cmath>
using namespace std;

class Moment {
public:
	float* Arr = NULL;
	int n, k;
	float sum = 0;
	void create();
	void calc();
};


void Moment::create() {
	cout << "Введите порядок k (цел.полож): ";
	cin >> k;
	cout << "Введите количество элементов n (цел.полож): ";
	cin >> n;
	if (k < 0 or n < 0) {
		cout << "Порядок и число элементов должны быть положительными!\n";
		n = 0;
		k = 0;
	}
	Arr = new float[n * 2];
	for (int i = 0; i < n * 2; i += 2) {
		cout << "Введите случайную величену "<< i/2+1<< ":";
		cin >> Arr[i];
		cout << "Введите вероятность " << i / 2 + 1 << ":";
		cin >> Arr[i+1];
	}
}

void Moment::calc() {
	for (int i = 0; i < n * 2; i += 2) {
		sum += pow(Arr[i], k) * Arr[i + 1];
	}
	cout << "Момент порядка: " << sum;
}

int main() {
	Moment Moment;
	setlocale(LC_ALL, "RUS");
	Moment.create();
	Moment.calc();

}