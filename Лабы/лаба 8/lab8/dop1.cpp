#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int n_st, n_fin, sum = 0;
	cout << "������� ������ �������� ������������������: "; cin >> n_st;
	cout << "\n������� ��������� �������� ������������������: "; cin >> n_fin;
	do {
		if (n_st % 2 == 0)
			sum += n_st;
		n_st++;
	} while (n_st <= n_fin);
	cout << "����� ������ ���������: " << sum;

}