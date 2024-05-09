#include <iostream>
#include <ctime>
void main()
{
	setlocale(LC_ALL, "RUS");
	using namespace std;
	srand(time(NULL));
	int n;
	int rmn1 = -10, rmn2 = -20, rmx1 = 10, rmx2 = 20;
	const int SIZE1 = 1000;
	const int SIZE2 = 1000;
	const int SIZE3 = 1000;
	int A[SIZE1] = {};
	int B[SIZE2] = {};
	int S[SIZE3] = {};
	cout << "Размерность массивов: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		*(A + (i)) = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx1 - rmn1) + rmn1);
		cout << "A[" << i << "]" << "\t" << A[i] << endl;
	}
	cout << " " << endl;
	for (int i = 0; i < n; i++)
	{
		*(B + (i)) = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx2 - rmn2) + rmn2);
		cout << "B[" << i << "]" << "\t" << B[i] << endl;
	}
	cout << " " << endl;
	cout << "Новый массив S: " << endl;
	for (int i = 0; i < n; i++)
	{
		*(S + (i)) = A[i] + B[i];
		cout << "S[" << i << "]" << "\t" << S[i] << endl;
	}
}
