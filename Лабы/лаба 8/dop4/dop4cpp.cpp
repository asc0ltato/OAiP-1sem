#include <iostream>
#include <ctime>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int num = 0, n[7];
	for (int i = 0; i < 7; i++) {
		if (i == 0)
			cout << "Введите числа последовательности: ";
		cin >> n[i];
	}
	for (int i = 0; i < 7; i++) {
		if (n[i] < 0 && n[i + 1]>0) {
			num++;
			continue;
		}

		if (n[i] > 0 && n[i + 1] < 0) {
			num++;
			continue;

		}
	}
	cout << "Количество переходов знаков равно " << num << endl;
}
