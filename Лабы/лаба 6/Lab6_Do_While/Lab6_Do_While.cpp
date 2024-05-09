#include <iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "Rus");
	float y, t, b = 2.4, j = 6, a = 1.5 * pow(10, -8), i;
	for (int cnt = 0; cnt <= 2; cnt++)
	{
		cout << "¬ведите i: ";
		cin >> i;

		do
		{
			y = a / (b + exp(b)) / (1 + i * j);
			t = cos(y + 1) / sqrt(abs(-2 * j));
			cout << "b = " << b << endl;
			cout << "y = " << y << endl;
			cout << "t = " << t << endl;
			b += 0.2;
		} while (b <= 3);

		b = 2.4;
	}

}