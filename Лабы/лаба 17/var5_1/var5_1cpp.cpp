#include <iostream>
#include <Windows.h>

using namespace std;

int* sumEven(int* arr, int size);

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//� ���������� �������, ���������� 15 ���������, ��������� � ������� ����� ���� ������ ��������� �������.

	// ������������ ������
	int size = 15;
	int* arr = new int[size];

	// ���������� ������� ���������� �������
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 50;
	}

	// ����� �������
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;

	// ����� ����� ������ ���������
	cout << "����� ������ ��������� �������: " << *sumEven(arr, size) << endl;

	// ������������ ������
	delete[] arr;
}

// ����� ������ ���������
int* sumEven(int* arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			sum += arr[i];
		}
	}
	return &sum;
}