#include <iostream>
#include <Windows.h>

using namespace std;

int& task_func(int** arr, int n, int m);

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*���������, ���� �� � ������� ���� �� ���� ������, ���������� ������������� ������� � ����� �� �����.
	����� ��������� ���������� ������ �������� �� ���������������.*/

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
			A[i][j] = rand() % 20 - 17;
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
	int& res = task_func(A, n, m);

	// ����� ���������� �� �����
	cout << "������� A(n,m) ����� ��������� ������ ��������� ���������� ������: " << endl;
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

int& task_func(int** arr, int n, int m)
{
	// ���������� ������, ��� ���� ���� �� ���� ������������� �������, ���� ��� ����, �� ���������� ��������� � �� �������
	// � ��������� ������ ��������� ���������� ������ �� ���������������
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (arr[i][j] > 0) {
				cout << "������ � ������������� ���������: " << i << endl; // ����� �� 0, ����� ������� +1
				break;
			}
		}
		if (j != m)
			break;
	}
	if (i == n) {
		cout << "������ � ������������� ��������� ���" << endl;
		exit(-1);
	} else {
		if (i != 0) {
			for (j = 0; j < m; j++) {
				arr[i - 1][j] = -arr[i - 1][j];
			}
		}
	}
	return arr[i][j];
}