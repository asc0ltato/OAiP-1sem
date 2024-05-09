#include <stdio.h>	
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*� ���������� �������, ��������� �� n ������������ ���������, ��������� ����� ������������� ��������� �������
	� ������������ ��������� �������, ������������� ����� ������������ �� ������ � ����������� �� ������ ����������.*/

	// ������������ ������ �� �
	int n;
	printf("������� ������ �������: ");
	scanf_s("%d", &n);
	int* arr = (int*)malloc(n * sizeof(int));

	// ���������� ������� ���������� �������
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}

	// ����� �������
	for (int i = 0; i < n; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");

	// ����� ������������� � ������������ ��������
	int max = arr[0];
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	printf("������������ �������: %d\n", max);
	printf("����������� �������: %d\n", min);

	// ����� ����� ������������� ���������
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			sum += arr[i];
		}
	}
	printf("����� ������������� ���������: %d\n", sum);

	// ����� ������������ ��������� ����� ������������ � �����������
	int mult = 1;

	// ����� �������� ������������� � ������������ ��������
	int maxIndex = 0;
	int minIndex = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == max) {
			maxIndex = i;
		}
		if (arr[i] == min) {
			minIndex = i;
		}
	}

	// ����� ������������ ��������� ����� ������������ � �����������
	if (maxIndex > minIndex) {
		for (int i = minIndex + 1; i < maxIndex; i++) {
			mult *= arr[i];
		}
	} else {
		for (int i = maxIndex + 1; i < minIndex; i++) {
			mult *= arr[i];
		}
	}
	printf("������������ ��������� ����� ������������ � �����������: %d\n", mult);

	free(arr);
}