#include <iostream>
#define print cout << "----------------" << endl;
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double m, x, y = 0, Y, max;
	double arr[4];
	for (int i = 0; i < 4; i++)
	{
		cout << "������� ����� x: "; cin >> x;
		arr[i] = x;

		// ����� ������������� ��������
		max = arr[0]; // ������ �����, ��� ������������ ������� - ������
		for (int j = 0; j < 4; j++) {
			if (arr[j] > max) { // ���� ������� ������ �������������
				max = arr[j];
			}
		}

		print;
		cout << "������������ ����� � �������: " << max << endl;
		print;

		m = 1 + max;

		Y = pow(arr[i], 2) + m;
		cout << "Y = " << Y << endl;
		y += Y;
		cout << "y = " << y << endl;
		print;
	}
}