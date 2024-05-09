#include <iostream>
#include <time.h>
#include <iomanip>
#include <windows.h>

#define N 3
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int A[2 * N][2 * N], B1[N][N], B2[N][N], B3[N][N], B4[N][N], i, j, k, m;
	srand((unsigned)time(NULL));

	cout << "Начальный массив" << endl;
	for (i = 0; i < 2 * N; i++) {
		for (j = 0; j < 2 * N; j++) {
			A[i][j] = rand() % 10 + 1;
			cout << setw(2) << A[i][j] << "  "; // Заполнение матрицы
		}
		cout << "\n";
	}
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			B1[i][j] = A[i][j];

	for (i = 0; i < N; i++)
		for (j = N, m = 0; j < 2 * N; j++, m++)
			B2[i][m] = A[i][j];

	for (i = N, k = 0; i < 2 * N; i++, k++)
		for (j = N, m = 0; j < 2 * N; j++, m++)
			B3[k][m] = A[i][j];

	for (i = N, k = 0; i < 2 * N; i++, k++)
		for (j = 0; j < N; j++)
			B4[k][j] = A[i][j];

	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			A[i][j] = B3[i][j];

	for (i = 0; i < N; i++)
		for (j = N, k = 0; j < 2 * N; j++, k++)
			A[i][j] = B4[i][k];

	for (i = N, k = 0; i < 2 * N; i++, k++)
		for (j = N, m = 0; j < 2 * N; j++, m++)
			A[i][j] = B1[k][m];

	for (i = N, k = 0; i < 2 * N; i++, k++)
		for (j = 0; j < N; j++)
			A[i][j] = B2[k][j];

	cout << "Массив после перестановки" << endl;
	for (i = 0; i < 2 * N; i++) {
		for (j = 0; j < 2 * N; j++)
			cout << setw(2) << A[i][j] << "  ";
		cout << "\n";
	}
	return 0;
}