#include <iostream>
#include <Windows.h>

using namespace std;

int* pfmin(int* arr, int size);
int* pfmax(int* arr, int size);

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*� ���������� ������� ����� ����������� � ������������ ��������.
	��������� �� ��������*/

	// ������������ ������ � ������ �������
	int size;
	cout << "������� ������ �������: ";
	cin >> size;
	int* arr = new int[size];

	// ���������� ������� ���������� �������
	srand(time(NULL));
	for (int i = 0; i < size; i++){
		arr[i] = rand() % 40;
	}

	// ����� �������
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;

	// ����� ������������ � ������������� ��������
	/*cout << "����������� �������: " << *pfmin(arr, size) << endl;
	cout << "������������ �������: " << *pfmax(arr, size) << endl;*/

	// ���������� ��������
	int delta = *pfmax(arr, size) - *pfmin(arr, size);
	cout << "�������� ������������� � ������������ ��������� �������: " << delta << endl;

	// ������������ ������
	delete[] arr;
}

// ����� ������������
int* pfmin(int* arr, int size) {
	int* min = arr;
	for (int i = 0; i < size; i++) {
		if (*min > arr[i]) {
			min = &arr[i];
		}
	}
	return min;
}

// ����� �������������
int* pfmax(int* arr, int size) {
	int* max = arr;
	for (int i = 0; i < size; i++) {
		if (*max < arr[i]) {
			max = &arr[i];
		}
	}
	return max;
}

