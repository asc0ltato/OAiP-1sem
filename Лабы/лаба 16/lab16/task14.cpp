#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

void task1_massiv(int* arr, int);
void task2_bstu(string str);

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// ������������ ������
	int size;
	cout << "������� ����������� �������: ";
	cin >> size;
	int* arr = new int[size];
	// ���������� ������� ���������� �������
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 25 - 15;
	}

	cout << "������� �����, ������� ����� ��������� �� ������� \"����\": ";
	string text;
	while (text == "") {
		getline(cin, text);
	}

	system("cls");

	int c;
	do {
		cout << "�������" << endl;
		cout << "1 - ���������� ������" << endl;
		cout << "2 - �������� ������ �� ����� \"����\" " << endl;
		cout << "3 - �����" << endl;
		cin >> c;
		cin.clear();
		cin.ignore(32767, '\n');
		switch (c)
		{
		case 1:
			// ����� ������� massiv
			task1_massiv(arr, size);
			break;
		case 2:
			// ����� ������� bstu
			task2_bstu(text);
			break;
		case 3:
			break;
		}
	} while (c != 3);
}

void task1_massiv(int* arr, int size)
{
	/*� ���������� �������, ��������� �� ������������ ���������, ��������� ����� ������������
	�� ������ �������� ������� � ����� ������� ��������� �������, ������������� ����� ������� �������������� ��������.*/


	// ����� �������
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	// ����� ������������ �� ������ �������� �������
	int min = 0;
	for (int i = 0; i < size; i++) {
		if (abs(arr[i]) < abs(arr[min])) {
			min = i;
		}
	}
	cout << "����� ������������ �� ������ �������� �������: " << min << endl;

	// ����� ������� ��������� �������, ������������� ����� ������� �������������� ��������
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			for (int j = i + 1; j < size; j++) {
				sum += abs(arr[j]);
			}
			break;
		}
	}
	cout << "����� ������� ��������� �������, ������������� ����� ������� �������������� ��������: " << sum << endl;

	// �������� �������
	delete[] arr;
}

void task2_bstu(string str)
{
	/*�������� ���������, ������������ ���� �� �� ��������� � ���������� ������ ����� "����".*/

	// �������� �� ������� "����" (����� ����)
	bool flag = false;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '�') {
			if (str[i + 1] == '�') {
				if (str[i + 2] == '�') {
					if (str[i + 3] == '�') {
						flag = true;
						break;
					}
				}
			}
		}
	}
	if (flag) {
		cout << "� ������ ���� ����� \"����\"" << endl;
	} else {
		cout << "� ������ ��� ����� \"����\"" << endl;
	}
}