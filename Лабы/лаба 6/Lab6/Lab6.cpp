#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	float y, t, b = 2, j = 6, a = 1.5 * pow(10, -8), i;
	for (int cnt = 0; cnt <= 3; cnt++)
	{
		cout << "¬ведите i: " << endl;
		cin >> i;

		y = a / (b + exp(b)) / (1 + i * j);
		t = cos(y + 1) / sqrt(abs(-2 * j));


		cout << "y = " << y << endl;
		cout << "t = " << t << endl << endl;
	}
}