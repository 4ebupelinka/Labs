#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

void calc(float x) {
	ifstream file("input.txt");
	float rez = 0, der_rez = 0, s = 0;
	int i = 0;
	while (file >> s) {
		rez += s * pow(x, i);
		if (i != 0 ) der_rez+= s *i* pow(x, i-1);
		i++;
	}
	file.close();
	ofstream output("output.txt");
	output << "f(x) = " << rez << endl << "f'(x) = " << der_rez;
	cout << "Результат записан в файл output.txt";
}

int main()
{
	setlocale(LC_ALL, "RUS");
	float x;
	cout << "Введите х: ";
	cin >> x;
	calc(x);
	
}