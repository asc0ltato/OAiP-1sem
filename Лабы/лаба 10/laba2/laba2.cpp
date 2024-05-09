#include <algorithm>
#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "Russian");
	int n, k, max, num;
	cout <<"¬ведите размер массива:\n";
	cout << "n = ";
	cin >> n;
	int* arr = new int[n];
	cout << "¬ведите массив:\n";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	k = max = 0;
	for (int i = 0; i < n; i++)
	{
		if (i + 1 < n && arr[i + 1] == arr[i])
			k++;
		else
		{
			k++;
			if (k > max)
			{
				max = k;
				num = arr[i];
			}
			k = 0;
		}
	}
	cout << "„исло " << num << " повтор€етс€ " << max << " раз(а)\n";
	return 0;
}