#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	const int sz = 10;
	int A[sz], B[sz], proverka, * ukazatel, col_par = 0;
	ukazatel = &col_par;

	srand((unsigned)time(NULL));

	for (int i = 0; i < sz; i++) {
		A[i] = rand() % 10;
		B[i] = rand() % 10;
	}

	cout << "Массив A:" << endl;
	for (int i = 0; i < sz; i++) {

		cout << *(A + i) << " ";
	}
	cout << "\n";
	cout << "Массив B:" << endl;
	for (int j = 0; j < sz; j++)
	{
		cout << *(B + j) << " ";
	}
	cout << "\n";
	for (int i = 0; i < sz; i++) {
		if (*(A + i) == *(B + i)) {
			cout << "Элементы массивов равны: " << A[i] << " = " << B[i] << endl;
			cout << "Элементы массивов равны: " << "A[" << i << "] = " << "B[" << i << "]" << endl;
			col_par += 1;
		}
	}
	cout << "Кол-во пар: " << *ukazatel << endl;
}