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

	// ������������ ��������� ������ N x M
	int N, M;
	cout << "������� ����������� ������� N x M: ";
	cout << "N = "; cin >> N;
	cout << "M = "; cin >> M;
	int** arr = new int* [N];
	for (int i = 0; i < N; i++) {
		arr[i] = new int[M];
	}
	// ���������� ������� ���������� �������
	srand(time(NULL));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			arr[i][j] = rand() % 10;
		}
	}

	cout << "������� �����, ��� ����� ������ ����� c ����� �������� ������ * : ";
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
			task2_text(text);
			break;
		case 3:
			break;
		}
	} while (c != 3);
}

void task1_massiv(int** arr, int size1, int size2)
{
	/*��� ������ ������������ N x M.
	����� ������������ ������� � ��� �������.
	���� ������������ ��������� ���������, �� ������� �� ���. ����� ����� ��������� ���� ������� ���������.*/

	// ����� �������
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	// ����� ������������ ������� � ��� �������. ���� ������������ ��������� ���������, �� ������� �� ���. 
	int max = arr[0][0];
	int max_i = 0;
	int max_j = 0;
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
				max_i = i;
				max_j = j;
			}
		}
	}
	// ���� ������������ ��������� ���������, �� ������� �� ���
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (arr[i][j] == max) {
				cout << "������������ �������: " << arr[i][j] << " �� �������: " << "������ " << i << " ������� " << j << endl;
			}
		}
	}
	cout << endl;

	// ����� ����� ��������� ���� ������� ���������.
	int sum = 0;
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (i > j) {
				sum += arr[i][j];
			}
		}
	}
	cout << "����� ��������� ���� ������� ��������� = " << sum << endl;
}

void task2_text(string text)
{
	// ����� ������ ����� c �������� ������ *
	for (int i = 0; i < text.length(); i++) {
		if (text[i] == 'c') {
			text.insert(i + 1, "*");
		}
	}
	cout << "����� ����� ���������� ������� * ����� ������ ����� c: " << text << endl;
}