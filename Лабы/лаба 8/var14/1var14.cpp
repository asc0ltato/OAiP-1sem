#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int y;
	double c = 10.1, z;
	float sum_y = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << "Введите число y: "; cin >> y;
		sum_y += y;
		if (sum_y > c)
		{
			z = pow(sin(c), 2);
			cout << "z = sin(c)^2 = " << z << endl;
		}
		else
		{
			z = pow(cos(c), 2);
			cout << "z = cos(c)^2 = " << z << endl;
		}
	}
}	
