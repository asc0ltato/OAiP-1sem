#include <iostream>
#include <ctime>
void main()
{
	setlocale(LC_ALL, "RUS");
	using namespace std;
	srand(time(NULL));
	int m, n, q;
	int count = 0;
	int rmn1 = -10, rmn2 = -10, rmx1 = 10, rmx2 = 10;
	const int SIZE1 = 1000;
	const int SIZE2 = 1000;
	int A[SIZE1] = {};
	int B[SIZE2] = {};
	int max = A[0];
	cout << "Размер первого массива: ";
	cin >> n;
	cout << "Размер второго массива: ";
	cin >> m;
	for (int i = 0; i < n; i++)
	{
		*(A + (i)) = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx1 - rmn1) + rmn1);
		cout << "A[" << i << "]" << "\t" << A[i] << endl;
	}
	cout << " " << endl;
	for (int j = 0; j < m; j++)
	{
		*(B + (j)) = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx2 - rmn2) + rmn2);
		cout << "B[" << j << "]" << "\t" << B[j] << endl;
	}
	cout << " " << endl;
	for (int i = 0; i < n; ++i)
	{
		if (*(A + (i)) > max)
		{
			max = A[i];
		}
	}
	cout << "Максимальный элемент в массиве A = " << max << endl;
	cout << " " << endl;
	for (int j = 0; j < m; ++j)
	{
		if (max == B[j])
		{
			count++;
		}
	}
	if (count > 0)
	{
		cout << "Есть" << endl;
	}
	else {
		cout << "Нет";
	}


}
