#include <iostream>
#include <Windows.h>

using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*���������, ��� �� ������ ������� �������� ���� �� ���� ������� �������.
	���� ���, �� �������� �������� ���� ������������� ��������� ������� �� �������.*/

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
			A[i][j] = rand() % 4 - 2;
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

	// �������� ������� ������� ��������� � ������ ������ �������
	int flag = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (A[i][j] == 0) {
				flag++;
				break;
			}
		}
	}
	if (flag == n) {
		cout << "��� ������ ������� �������� ���� �� ���� ������� �������" << endl;

		// ������ ������������� ��������� �� �������
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (A[i][j] < 0) {
					A[i][j] = 0;
				}
			}
		}
		cout << "������� A(n,m) ����� ������ ������������� ��������� �� �������: " << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << A[i][j] << "\t";
			}
			cout << endl;
		}
	} else {
		cout << "�� ��� ������ ������� �������� ���� �� ���� ������� �������" << endl;
	}
	for (int i = 0; i < n; i++)
		delete[] A[i];
	delete[] A;
}