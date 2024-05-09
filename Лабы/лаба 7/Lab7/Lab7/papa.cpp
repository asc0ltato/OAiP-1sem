#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	double v, s = 5.2, x, j = 10.4 * pow(10, 4);
	for (int cnt = 0; cnt <= 3; cnt++)
	{
		cout << "¬ведите x: "<< endl;
		cin >> x;
		if (2 * s > x * j)
		{
			v = pow(cos(j * x), 2);
		}
		else if (2 * s < x * j)
		{
			v = 2 * tan(j * x);
		}
		else if ((2 * s) == x * j)
		{
			v = 5 - exp(x / 2);
		}
		cout << "v = "<< v << endl;

	}
	return 0;
}