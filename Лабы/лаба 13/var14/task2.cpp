#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Дана строка символов, состоящая из произвольных десятичных цифр, разделенных пробелами. С помощью указателей, вывести четные числа в этой строке.

	string str = "18 23 45 67 89 12 34 56 78 90";
	string result = "";
	char* p = &str[0];
	// Подсчет длины строки
	int len = 0;

	for (int i = 0; *(p + i) != '\0'; i++) {
		len++;
	}

	// Перебор строки с указателем

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
	cout << "Числа:\n" << str << "\n";
	cout << "Четные числа:\n" << result << endl;
}
