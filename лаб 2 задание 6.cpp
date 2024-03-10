#include <iostream>
#include <fstream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	ifstream file("f.txt");
	double summ = 0;
	long double multip = 1;
	double num;
	if (!file.is_open()) {
		cout << "Не удалось открыть файл" << endl;
	}
	while (file >> num) {
		summ += num;
		multip *= num;
	}
	cout << "Сумма: " << abs(summ) << endl;
	cout << "Произведение: " << multip*multip << endl;
	file.close();
}
