#include <stdio.h>	
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*В одномерном массиве, состоящем из n вещественных элементов, вычислить произведение
	положительных элементов массива и сумму элементов массива, расположенных до минимального элемента.*/

	// Динамический массив на С
	int n;
	printf("Введите размер массива: ");
	scanf_s("%d", &n);
	int* arr = (int*)malloc(n * sizeof(int));

	// Заполнение массива случайными числами
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 20;
	}

	// Вывод массива
	for (int i = 0; i < n; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");

	// Произведение положительных элементов массива
	int mult = 1;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			mult *= arr[i];
		}
	}
	printf("Произведение положительных элементов массива: %d\n", mult);

	// Сумма элементов массива, расположенных до минимального элемента
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
	printf("Минимальный элемент в массиве: %d\n", min);
	printf("Сумма элементов массива, расположенных до минимального элемента: %d\n", sum);

	free(arr);
}