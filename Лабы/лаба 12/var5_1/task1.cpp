#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

void main()
{
	// ��������� ������ �� ��� �����, �������� � ������ ��������, ������� �������� ��������������� �� �����, � �� ������ - �������.
	setlocale(LC_ALL, "Russian");
	int N, sum = 0;
	double average = 0;
	cout << "������� ����������� �������: ";
	cin >> N;
	int* arr = new int[N];
	srand(time(NULL));
	cout << "�������� ������: ";

	for (int i = 0; i < N; i++) {
		*(arr + i) = rand() % 100;
		cout << *(arr + i) << " ";
		sum += *(arr + i); // ����� ��������� �������
	}

	average = sum / N; // ������� �������������� ��������� �������
	cout << "\n����� ��������� �������: " << sum << "\n���-�� ��������� : " << N << "\n������� ��������������: " << average << "\n\n\n";

	int* arr1 = new int[N];
	int* arr2 = new int[N];
	int j = 0, k = 0;

	for (int i = 0; i < N; i++) {
		if (*(arr + i) >= average) {
			*(arr1 + j) = *(arr + i);
			j++;
		} else {
			*(arr2 + k) = *(arr + i);
			k++;
		}
	}

	cout << "������ ����� ��������������: ";

	for (int i = 0; i < j; i++) {
		cout << *(arr1 + i) << " ";
	}

	cout << "|"; // ���� �����������, ��� �����������

	for (int i = 0; i < k; i++) {
		cout << *(arr2 + i) << " ";
	}
}