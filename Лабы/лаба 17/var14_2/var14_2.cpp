#include <iostream>
#include <Windows.h>

using namespace std;

int& task_func(int** arr, int n, int m);

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*���� � ������� ������� �������, ��� �������� �������� ������������, �� ����� ��������� ����������� �������
	�������� �� ���������������.*/

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
			A[i][j] = rand() % 10 - 4;
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

	// ����� �������
	int& k = task_func(A, n, m);

	// ����� ���������� �� �����
	cout << "����� ������� �������, ��� �������� �������� ������������: " << k << endl;
	cout << "������� A(n,m) ����� ��������� ������ ��������� ����������� �������: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}

	// ������������ ������
	for (int i = 0; i < n; i++)
		delete[] A[i];
	delete[] A;
}

// ������� ������ ������� �������, ��� �������� �������� ������������ � ������ ������ ��������� ����������� �������
int& task_func(int** arr, int n, int m) {
	int i, j;
	// �������� �� �� �������, � �� �������� !!!
	for (j = 0; j < m; j++) {
		for (i = 0; i < n; i++) {
			if (arr[i][j] < 0)
				break;
		}
		if (i == n)
			break;
	}
	if (j == m) { // ���� ����� �� ����� � ������� ���
		cout << "� ������� ��� �������, ��� �������� �������� ������������" << endl;
		exit(1); // �������� ������ ���
	} else {
		// ������ ������ ��������� ����������� �������
		for (i = 0; i < n; i++) {
			arr[i][j - 1] = -arr[i][j - 1];
		}
		return j;
	}
}
