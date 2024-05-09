#include <stdio.h>	
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*� ���������� �������, ��������� �� n ������������ ���������, ��������� ���������� ��������� �������,
	������� ���������� ��������� ����� �, � ����� ����� ������ ��������� �������, ������������� ����� ���������� �������������� ��������.*/

	// ������������ ������ �� �
	int n;
	printf("������� ������ �������: ");
	scanf_s("%d", &n);
	double* arr = (double*)malloc(n * sizeof(double));

	// ���������� ������� ���������� ������������� �������
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		arr[i] = (rand() % 1000 / 10.0) - 50;
		printf("%5.1lf\t", arr[i]);
	}
	printf("\n");

	// ���� ����� �
	double c;
	printf("������� ����� �: ");
	scanf_s("%lf", &c);

	// ������� ���������� ��������� �������, ������� ����� �
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < c) {
			count++;
		}
	}
	printf("���������� ��������� �������, ������� ����� �: %d\n", count);

	// ������� ����� ����� ������ ��������� �������, ������������� ����� ���������� �������������� ��������
	double sum = 0;
	int lastNegative = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			lastNegative = i;
		}
	}
	for (int i = lastNegative + 1; i < n; i++) {
		sum += (int)arr[i];
	}
	printf("����� ����� ������ ��������� �������, ������������� ����� ���������� �������������� ��������: %5.1lf\n", sum);

	free(arr);
}