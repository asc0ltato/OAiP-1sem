#include <iostream>
#include <ctime>
using namespace std;
void main()
{
	// ��� ������ X, ���������� k ���������, � ������ Y, ���������� n ���������. ����� �� �����������, �.�. ������ Z, ���������� ��������, �������� � ��� �������.
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int k, n;
	cout << "������� ����������� ������� X: ";
	cin >> k;
	int* X = new int[k];
	cout << "������� ����������� ������� Y: ";
	cin >> n;
	int* Y = new int[n];
	int* Z = new int[k];
	int size = 0;

	for (int i = 0; i < k; i++) {
		*(X + i) = 1 + rand() % 20;
	} 

	cout << "�������� ������ X: ";

	for (int i = 0; i < k; i++) {
		cout << *(X + i) << " ";
	}

	for (int i = 0; i < n; i++) {
		*(Y + i) = 1 + rand() % 30;
	}

	cout << endl;
	cout << "�������� ������ Y: ";

	for (int i = 0; i < n; i++) {
		cout << *(Y + i) << " ";
	}

	cout << endl;

	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			if (*(X + i) == *(Y + j)) {
				Z[size] = X[i];
				size++;
			}
		}
	}

	cout << "������ Z: ";

	for (int i = 0; i < size; i++) {
		cout << Z[i] << " ";
	}
}