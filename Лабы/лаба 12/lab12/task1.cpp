#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	const int sz = 10;
	int massiv_A[sz], massiv_B[sz], proverka, * ukazatel, col_par = 0;

	ukazatel = &col_par;

	srand((unsigned)time(NULL));

	for (int i = 0; i < sz; i++) {
		massiv_A[i] = rand() % 10;
		massiv_B[i] = rand() % 10;
	}

	cout << "Массив A:" << endl;

	for (int i = 0; i < sz; i++) {

		cout << *(massiv_A + i) << " ";
	}
	cout << "\n";
	cout << "Массив B:" << endl;

	for (int j = 0; j < sz; j++) {
		cout << *(massiv_B + j) << " ";
	}
	cout << "\n";
	for (int i = 0; i < sz; i++) {
		if (*(massiv_A + i) == *(massiv_B + i)) {
			cout << "Элементы массивов равны: " << massiv_A[i] << " = " << massiv_B[i] << endl;
			cout << "Элементы массивов равны: " << "massiv_A[" << i << "] = " << "massiv_B[" << i << "]" << endl;
			col_par += 1;
		}
	}
	cout << "Кол-во пар: " << *ukazatel << endl;
}
