#include <stdio.h>	
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*� ���������� �������, ��������� �� n ������������ ���������, ��������� ������������
	������������� ��������� ������� � ����� ��������� �������, ������������� �� ������������ ��������.*/

	// ������������ ������ �� �
	int n;
	printf("������� ������ �������: ");
	scanf_s("%d", &n);
	int* arr = (int*)malloc(n * sizeof(int));

	// ���������� ������� ���������� �������
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 20;
	}

	// ����� �������
	for (int i = 0; i < n; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");

	// ������������ ������������� ��������� �������
	int mult = 1;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			mult *= arr[i];
		}
	}
	printf("������������ ������������� ��������� �������: %d\n", mult);

	// ����� ��������� �������, ������������� �� ������������ ��������
	int min = arr[0];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] == min) {
			break;
		}
		sum += arr[i];
	}
	printf("����������� ������� � �������: %d\n", min);
	printf("����� ��������� �������, ������������� �� ������������ ��������: %d\n", sum);

	free(arr);
}