#include <iostream>
void main()
{
	setlocale(LC_ALL, "RUS");
	using namespace std;
	int n = 1;
	double C1, C2, c1, c2;
	cout << "Первоначальное кол-во воды C1: ";
	cin >> C1;
	cout << "Первоначальное кол-во воды C2: ";
	cin >> C2;
	while (n <= 12)
	{
		c1 = C1 / 2;
		C1 = C1 - c1;
		C2 = C2 + c1;
		c2 = C2 / 2;
		C2 = C2 - c2;
		C1 = c1 + c2;
		n++;
	}
	cout << "C1 = " << C1 << " C2 = " << C2 << endl;
}
