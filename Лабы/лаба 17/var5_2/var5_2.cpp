#include <iostream>
#include <Windows.h>

using namespace std;

int& task_func(int** arr1, int** arr2, int n, int m, int** arr3);

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*���� ��� ������������� ������� �������� n x m � m x n.
	���� � ������� ����������� ������� ��������, �� ���������� ������������ ���� ������.*/

	// ������������ ������� A(n,m)
	int n, m;
	cout << "������� ����������� ������� A(n,m): " << endl;
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;

	// ��������� ������ ��� �������
	int** A = new int* [n];
	for (int i = 0; i < n; i++) {
		A[i] = new int[m];
	}

	int** B = new int* [m];
	for (int i = 0; i < m; i++) {
		B[i] = new int[n];
	}

	// ���������� ������ ���������� �������
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			A[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			B[i][j] = rand() % 20;
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
	cout << endl;

	cout << "������� B(m,n): " << endl;
	for (int i = 0; i < m; i++)	{
		for (int j = 0; j < n; j++) {
			cout << B[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	// ������� �������������� ������� C(n,n)
	int** C = new int* [n];
	for (int i = 0; i < n; i++) {
		C[i] = new int[n];
	}

	// ��������� ������� C ������
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			C[i][j] = 0;
		}
	}

	// ����� �������
	int& res = task_func(A, B, n, m, C);

	// ����� ������� �� �����
	cout << "������� C(n,n): " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << C[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	// ������� ������
	for (int i = 0; i < n; i++) {
		delete[] A[i];
	}
	delete[] A;

	for (int i = 0; i < m; i++) {
		delete[] B[i];
	}
	delete[] B;

	for (int i = 0; i < n; i++) {
		delete[] C[i];
	}
	delete[] C;

}

int& task_func(int** arr1, int** arr2, int n, int m, int** arr3) {
	int i, j;
	// �������� �� ������� ����� � ��������
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (arr1[i][j] == 0) {
				cout << "� ������� A(n,m) ���� ����!" << endl;
				exit(-1);
			}
		}
	}

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (arr2[i][j] == 0) {
				cout << "� ������� B(m,n) ���� ����!" << endl;
				exit(-1);
			}
		}
	}

	// ���� ����� ���, �� ���������� ��������� ������ � ���������� ��������� � ������� C(n,n)
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				arr3[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
	return arr3[i][j];
}


