#include <iostream>
#include <Windows.h>

using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*���������, ���� �� � ������� ���� �� ���� ������, ���������� �������, ������ ����, � ����� �� �����.
	��������� ��� �������� ������� �� �������� ������� �������� ��������� ������.*/

	// ������������ ������� A(n,m)
	int n, m;
	cout << "������� ����������� ������� A(n,m): " << endl;
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;

	// ��������� ������ ��� �������
	int** A = new int* [n];
	for (int i = 0; i < n; i++)
		A[i] = new int[m];

	// ���������� ������� ���������� �������
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			A[i][j] = rand() % 10;
		}
	}

	// ����� ������� �� �����
	cout << "������� A(n,m): " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}

	// ���������� ������ ������ � ������� ���������
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (A[i][j] == 0) {
				k = i;
				break;
			}
		}
		if (k != 0) {
			break;
		}
	}


	// ����� ����������
	if (k == 0) {
		cout << "� ������� ��� ����� � �������� ����������." << endl;
	} else {
		cout << "� ������� ���� ������ � �������� ����������." << endl;
		cout << "����� ������: " << k << endl;
		cout << "������� ����� ���������� ���� ��������� �� �������� ������� �������� ��������� ������: " << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				A[i][j] -= A[k][0];
				cout << A[i][j] << "\t";
			}
			cout << endl;
		}
	}

	// ������������ ������
	for (int i = 0; i < n; i++) {
		delete[] A[i];
	}
	delete[] A;
}