#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int chek() {
	ifstream file("input.txt");
	float c1, c2, c3, b, eps, a1, a2, a3;
	cout << "Введите коэффицент с1: ";
	cin >> c1;
	cout << "Введите коэффицент с2: ";
	cin >> c2;
	cout << "Введите коэффицент с3: ";
	cin >> c3;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите погрешность: ";
	cin >> eps;
	if (file.eof()) {
		file.close();
		cout << "Слишком мало значений!\n";
		return(false);
	}
	file >> a1;
	if (file.eof()) {
		file.close();
		cout << "Слишком мало значений!\n";
		return(false);
	}
	file >> a2;
	if (file.eof()) {
		file.close();
		cout << "Слишком мало значений!\n";
		return(false);
	}
	file >> a3;
	for (;;) {
		if (abs(b - c1 * a1 - c2 * a2 - c3 * a3) > eps) { 
			file.close(); 
			return (false); 
		}
		if (file.eof()) {
			file.close();
			return(true);
		}
		a1 = a2;
		a2 = a3;
		file >> a3;
	}

}

void output() {
	bool a = chek();
	ofstream output("output.txt");
	if (a == true) output << "Последовательность удовлетворяет РС (с учетом погрешности)";
	else output << "Последовательность не удовлетворяет РС";
	cout << "Ответ записан в файл output.txt";
}


int main()
{
	setlocale(LC_ALL, "RUS");
	output();
}