//#include <iostream>
//#include <windows.h>
//#include <string>
//#include <stdio.h>
//using namespace std;
//void main() {
//	setlocale(LC_ALL, "ru");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	char string[] = "sunny slow dadada";
//	int letter = 0, kol = 0, max = 0, q, w;
//	for (int i = 0; i < strlen(string); i += letter + 1, letter = 0) {
//		for (int j = i; ; j++) {
//			letter++;
//			if (string[j + 1] == ' ' || string[j + 1] == '\0') {
//				break;
//			}
//		}
//		for (int j = i; j < i + letter - 1; j++) {
//			if (string[j] == 'a' || string[j] == 'e' || string[j] == 'i' || string[j] == 'o' || string[j] == 'u')
//			{
//				kol++;
//				if (kol > max)
//				{
//					max = kol;
//					q = i;
//					w = letter;
//
//				}
//
//			}
//
//		}
//		kol = 0;
//	}
//	string[q + w] = '\0';
//	for (int s = q; s < q + w; s++)
//	{
//		cout << string[s];
//	}
//	cout << endl;
//}

//Из заданного предложения удалить те слова, которые уже встречались в предложении раньше.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str[] = { "Lorem", " ipsum", " dolor", " adipiscing", " amet,", " ipsum", " adipiscing", " sit." };
	for (int i = 7; i >= 0; i--) {
		for (int k = 0; k < i; k++) {
			if (str[i] == str[k])
				str[k].erase();
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int k = 0; k < str[i].size(); k++) {
			cout << str[i][k];
		}
	}
	return 0;
}
