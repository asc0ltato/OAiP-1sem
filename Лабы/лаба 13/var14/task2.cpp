#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// ���� ������ ��������, ��������� �� ������������ ���������� ����, ����������� ���������. � ������� ����������, ������� ������ ����� � ���� ������.

	string str = "18 23 45 67 89 12 34 56 78 90";
	string result = "";
	char* p = &str[0];
	// ������� ����� ������
	int len = 0;

	for (int i = 0; *(p + i) != '\0'; i++) {
		len++;
	}

	// ������� ������ � ����������

	for (int i = 0; i < len; i++) {
		if (*(p + i) == ' ') {
			continue;
		} else {
			if ((*(p + i) - '0') % 2 == 0 && (*(p + i + 1) - '0') % 2 == 0) {
				result += *(p + i - 1);
				result += *(p + i);
				result += " ";
			}
		}
	}
	cout << "�����:\n" << str << "\n";
	cout << "������ �����:\n" << result << endl;
}
