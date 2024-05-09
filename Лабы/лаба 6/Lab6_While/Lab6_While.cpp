#include <iostream>
void main()
{
	setlocale(LC_ALL, "RUS");
	using namespace std;
	float y, t, b = 2, j = 6, a = 1.5 * pow(10, -8), i = 3;
	while (i >= 2)
	{
		y = a / (b + exp(b)) / (1 + i * j);
		t = cos(y + 1) / sqrt(abs(-2 * j));
		cout << "i = " << i << endl;
		cout << "y = " << y << endl;
		cout << "t = " << t << endl;
		cout << " " << endl;
		i = i + (-0.1);

	}
}