#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	// � ������� � ����� ������ ���� ���������, ������� �����, ������ � ������ ����� �.
	setlocale(LC_ALL, "Russian");
	int size;
	cout << "������ ������� A: ";
	cin >> size;
	int* Arr = new int[size];

	for (int i = 0; i < size; i++) {
		*(Arr + i) = rand() % 99;
	}
	// ����� �������
	cout << "\n��� ������ A: ";

	for (int i = 0; i < size; ++i) {
		cout << *(Arr + i) << " ";
	}

	int c;
	cout << "\n������� ����� �: ";
	cin >> c;

	cout << "\n������ ��������� ������� �, ������� ����� �: ";
	for (int i = 0; i < size; ++i) {
		if (*(Arr + i) == c)
		{
			cout << i << " ";
		}
	}

	cout << "\n������ ��������� ������� �, ������� ������ �: ";
	for (int i = 0; i < size; ++i) {
		if (*(Arr + i) > c)
		{
			cout << i << " ";
		}
	}

	cout << "\n������ ��������� ������� �, ������� ������ �: ";
	for (int i = 0; i < size; ++i) {
		if (*(Arr + i) < c)
		{
			cout << i << " ";
		}
	}
}