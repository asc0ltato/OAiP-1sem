#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

void task1_massiv(int** arr, int size1, int size2);
void task2_text(string str);

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// ��������� ������
	int N, M;
	cout << "������� ����������� ������� N x M: ";
	do {
		cout << "N = "; cin >> N;
		cin.clear();
		cin.ignore(32767, '\n');

	} while (N <= 0);
	do {
		cout << "M = "; cin >> M;
		cin.clear();
		cin.ignore(32767, '\n');
	} while (M <= 0);
	int** arr = new int* [N];
	for (int i = 0; i < N; i++) {
		arr[i] = new int[M];
	}
	// ���������� �������
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << "������� ������� ������� [" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}

	cout << "������� ������, ������� �������� ������� � ��������� �����: ";
	string text;
	while (text == "") {
		getline(cin, text);
	}

	system("cls");

	int c;
	do {
		cout << "�������" << endl;
		cout << "1 - ��������� ������" << endl;
		cout << "2 - �������� ������ �� ������� ����� c" << endl;
		cout << "3 - �����" << endl;
		cin >> c;
		cin.clear();
		cin.ignore(32767, '\n');
		switch (c) {
		case 1:
			// ����� ������� massiv
			task1_massiv(arr, N, M);
			break;
		case 2:
			// ����� ������� text
			task2_text(text);
			break;
		case 3:
			break;
		default:
			cout << "�������� ����" << endl;
			break;
		}
	} while (c != 3);
}

void task1_massiv(int** arr, int size1, int size2)
{
	/*������ ������������ ����� � ������ �[n, m](n, m > 0) � �� ���� ������ ������ ������  ��������� �������.
	���� ������ ������� ������ �������, ������ �� ������.*/

	// ����� �������
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	// ����������� �������
	for (int i = 0; i < size1; i++) {
		if (arr[i][0] != 0) {
			for (int j = 0; j < size2; j++) {
				arr[i][j] += 1;
			}
		}
	}

	// ����� �������
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void task2_text(string str)
{
	/*���� ������.��� ������� ����� �������� � �������� ��������, ��������� - �������� �������� � ? �.
	������� ��������� �� �����.*/

	cout << "������ �� ��������������: " << str << endl;

	// �������������� ������
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= '�' && str[i] <= '�') {
			str[i] -= 32;
		} else if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = '?';
		}
	}

	cout << "������ ����� ��������������: " << str << endl;

}