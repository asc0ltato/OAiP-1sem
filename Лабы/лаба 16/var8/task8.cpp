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
	for (int i = 0; i < N; i++)	{
		for (int j = 0; j < M; j++) {
			arr[i][j] = rand() % 25 - 10;
		}
	}

	cout << "������� ����� �� ���������� ���� (����� ��������� ���������) : ";
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

	/*��� ��������� ������, ��������� �� N ����� � � ��������.
	����� ���������� �������������, ������������� � ������� ��������� �������.*/

	// ����� �������
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	int count_neg = 0;
	int count_pos = 0;
	int count_zero = 0;
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (arr[i][j] < 0) {
				count_neg++;
			} else if (arr[i][j] > 0) {
				count_pos++;
			} else {
				count_zero++;
			}
		}
	}
	cout << "���������� ������������� ���������: " << count_neg << endl;
	cout << "���������� ������������� ���������: " << count_pos << endl;
	cout << "���������� ������� ���������: " << count_zero << endl;
}

void task2_text(string str)
{
	/*�������� ���������, ������� ������ ��������� ���� ������ � ���������� ����� ���������� ����.
	����� ��������� ���������*/

	// ������� ���������� ����
	int count = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ' && str[i + 1] != ' ') {
			count++;
		}
	}
	cout << "���������� ����: " << count + 1 << endl;
}