#include <iostream>
#include <ctime>
using namespace std;
void main()
{
	// Дан массив X, содержащий k элементов, и массив Y, содержащий n элементов. Найти их пересечение, т.е. массив Z, содержащий элементы, входящие в оба массива.
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int k, n;
	cout << "Введите размерность массива X: ";
	cin >> k;
	int* X = new int[k];
	cout << "Введите размерность массива Y: ";
	cin >> n;
	int* Y = new int[n];
	int* Z = new int[k];
	int size = 0;

	for (int i = 0; i < k; i++) {
		*(X + i) = 1 + rand() % 20;
	} 

	cout << "Исходный массив X: ";

	for (int i = 0; i < k; i++) {
		cout << *(X + i) << " ";
	}

	for (int i = 0; i < n; i++) {
		*(Y + i) = 1 + rand() % 30;
	}

	cout << endl;
	cout << "Исходный массив Y: ";

	for (int i = 0; i < n; i++) {
		cout << *(Y + i) << " ";
	}

	cout << endl;

	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			if (*(X + i) == *(Y + j)) {
				Z[size] = X[i];
				size++;
			}
		}
	}

	cout << "Массив Z: ";

	for (int i = 0; i < size; i++) {
		cout << Z[i] << " ";
	}
}
