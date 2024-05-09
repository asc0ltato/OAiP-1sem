#include <iostream>
#include <ctime>
void main()
{
	setlocale(LC_ALL, "RUS");
	using namespace std;
	srand(time(NULL));
	int n, t;
	int count1 = 0, count2 = 0;
	int rmn1 = -10, rmn2 = -20, rmx1 = 10, rmx2 = 20;
	const int SIZE1 = 1000;
	const int SIZE2 = 1000;
	int A[SIZE1] = {};
	int B[SIZE2] = {};
	int max = A[0];
	cout << "Размерность массивов: ";
	cin >> n;
	cout << "Значение t: ";
	cin >> t;
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
	for (int i = 0; i < n; ++i)
	{
		if (*(A + (i)) < t)
		{
			count1++;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (*(B + (i)) < t)
		{
			count2++;
		}
	}
	cout << "Кол-во элементов в массиве А  <5 : " << count1 << endl;
	cout << "Кол-во элементов в массиве B  <5 : " << count2 << endl;
	cout << " " << endl;
	if (count1 > count2)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "A[" << i << "]" << "\t" << A[i] << endl;
		}
	}
	if (count1 < count2)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "B[" << i << "]" << "\t" << B[i] << endl;
		}
	}
	if (count1 == count2)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "A[" << i << "]" << "\t" << A[i] << endl;
		}
		cout << " " << endl;
		for (int i = 0; i < n; i++)
		{
			cout << "B[" << i << "]" << "\t" << B[i] << endl;
		}
	}

}
