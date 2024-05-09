//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RUS");
//	cout << "Задайте последовательность из 3 слов" << endl;
//	string str1 = "";
//	string str2 = "";
//	string str3 = "";
//
//	cin >> str1 >> str2 >> str3;
//	cout << "Введите окончание" << endl;
//	char end;
//	cin >> end;
//
//	if (str1[(str1.size() - 1)] == end)
//	{
//		cout << str1;
//	}
//	if (str2[(str2.size() - 1)] == end)
//	{
//		cout << endl << str2;
//	}
//	if (str3[(str3.size() - 1)] == end)
//	{
//		cout << endl << str3;
//	}
//
//	return 0;
//}

//#include <iostream>
////В заданной последовательности слов найти все слова, имеющие заданное окончание
//using namespace std;
//
//int main()
//{
//	char str[] = "Lorem ipsum dolor adipiscing amet, ipsum adipiscing sit.", res[1000];
//	int counter = 0, ind = 0;
//
//	for (int i = 0; i < strlen(str); i++)
//	{
//		if (str[i] == ' ' || str[i] == '.')
//			if (str[i - 1] == 'm' && str[i - 2] == 'u')
//			{
//				{
//					for (int k = counter; k > 0; k--)
//					{
//						res[ind] = str[i - k];
//						ind++;
//					}
//					res[ind] = ' ';
//					ind++;
//				}
//			}
//
//		if (str[i] == ' ')
//			counter = 0;
//		counter++;
//	}
//
//	res[ind] = '\0';
//
//	for (int i = 0; i < strlen(res); i++)
//	{
//		cout << res[i];
//	}
//
//	return 0;
//}

#include <stdio.h>
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
#define n 1000
#define q 1000
	int g = 0, k = 0, p = 0, h = 0, d = 0, t = 0;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char s[q], l[q], f[q];
	puts("Введите строку (после окончания ввода нажмите ENTER): ");
	gets_s(s);
	puts("Введите окончание (после окончания ввода нажмите ENTER): ");
	gets_s(l);
	puts("Слова из данной строки с данным окончанием: ");
	for (h; s[h] != '\0'; h++) {
		p = 0;
		d = 0;
		if (s[h] != 'ю') {
			while (f[p] != 'М') {
				f[p] = 'М';
				p++;
			}
			p = 0;
			while (s[h] != ' ' && s[h] != 'М') {
				f[p] = s[h];
				p++;
				h++;
			}
			f[p] = '\0';
			p = 0;
			g = strlen(f) - strlen(l);
			p = g;
			for (p; f[p] != 'М'; p++) {
				k = 0;
				for (k; l[k] != '\0'; k++) {
					if (l[k] == f[p]) {
						d++;
					}
				}
			}
			p = 0;
			if (d == strlen(l)) {
				t++;
				cout << t << ". "; puts(f);
			}
		}
	}
}
