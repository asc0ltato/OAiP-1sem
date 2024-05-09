#include <iostream>
#include <Windows.h>

using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*����� � ������� ������ ������, ��� �������� ������� ������������.
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
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			A[i][j] = rand() % 7 - 5;
		}
	}

	// ����� ������� �� �����
	cout << "������� A(n,m): " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}

	// ����� ������ ������, ��� �������� ������� ������������
	int i = 0;
	int firstElement = 0;
	while (i < n)
	{
		int j = 0;
		while (j < m)
		{
			if (A[i][j] >= 0)
				break;
			j++;
		}
		if (j == m)
		{
			cout << "������ ������, ��� �������� ������� ������������: " << i + 1 << endl;
			cout << "Ÿ ������ �������: " << A[i][0] << endl;
			firstElement = A[i][0];
			// ���������� ���� ��������� ������� �� �������� ������� �������� ��������� ������
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					A[i][j] += firstElement;
				}
			}

			// ����� ������� �� �����
			cout << "������� A(n,m) ����� ���������� ���� ��������� �� �������� ������� �������� ��������� ������: " << endl;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					cout << A[i][j] << "\t";
				}
				cout << endl;
			}
			break;
		}
		i++;
	}
	if (i == n)
	{
		cout << "� ������� ��� �����, ��� �������� ������� ������������." << endl;
	}

	// ������������ ������
	for (int i = 0; i < n; i++)
		delete[] A[i];
	delete[] A;

}