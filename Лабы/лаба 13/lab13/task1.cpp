//#include <stdio.h>
//#include <string.h>
//main() {
// 
//        char s[100];
//        int i, id, max, count, len;
//        gets_s(s);
//        len = strlen(s);
//        max = 0;
//        id = 0;
//        count = 0;
//        for (i = 0; i < len; i++) 
//            if (s[i] != ' ') count += 1;
//            else {
//           
//                    if (count > max) {
//                       
//                            max = count;
//                            id = i - count;
//                    }
//                        count = 0;
//            }
//               
//                            if (count > max) {
//                               
//                                    max = count;
//                                    id = i - count;
//                            }
//                                max += id;
//                                    for (i = id; i < max; i++)
//                                        putchar(s[i]);
//                                        printf("\n");
//}

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Написать программу, которая ищет в строке самое длинное и короткое слово.
	string str;
	cout << "Введите строку: ";
	getline(cin, str);

	int i = 0, j = 0, k = 0, max = 0, min = 0;

	string max_word = "";
	string min_word = str;

	while (str[i] != '\0') {
		if (str[i] == ' ') {
			if (max < i - j) {
				max = i - j;
				max_word = new char[max];
				for (k = 0; k < max; k++)
					max_word[k] = str[j + k];
			}
			if (min > i - j || min == 0) {
				min = i - j;
				min_word = new char[min];
				for (k = 0; k < min; k++)
					min_word[k] = str[j + k];
			}
			j = i + 1;
		}
		i++;
	}
	if (max < i - j) {
		max = i - j;
		max_word = new char[max];
		for (k = 0; k < max; k++)
			max_word[k] = str[j + k];
	}

	if (min > i - j || min == 0) {
		min = i - j;
		min_word = new char[min];
		for (k = 0; k < min; k++)
			min_word[k] = str[j + k];
	}
	cout << "Самое длинное слово: ";

	for (i = 0; i < max; i++) {
		cout << max_word[i];
	}

	cout << endl;
	cout << "Самое короткое слово: ";

	for (i = 0; i < min; i++) {
		cout << min_word[i];
	}

	cout << endl;
}