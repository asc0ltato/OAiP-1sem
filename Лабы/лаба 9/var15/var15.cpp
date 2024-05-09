//Трапеция
//#include <iostream>
//using namespace std;
//void main()
//{
//	int a = 2, b = 7;
//	double s = 0, h, x;
//	const double n = 200;
//	h = (b - a) / n;
//	x = a;
//	for (x; x < (b - h);x = x + h)
//	{
//		s = s + h * ((pow(sin(x), 2) + 1) + (pow(sin(x + h), 2) + 1)) / 2;
//	}
//	cout << "s = " << s << endl;
//}

//Парабола
//#include <iostream>
//using namespace std;
//void main()
//{
//	int a = 2, b = 7, i = 1;
//	double h, x, s1 = 0, s2 = 0, s;
//	const double n = 200;
//	h = (b - a) / (2 * n);
//	x = a + 2 * h;
//	for (i; i < n; i++)
//	{
//		s2 += pow(sin(x), 2) + 1;
//		x += h;
//		s1 += pow(sin(x), 2) + 1;
//		x += h;
//	}
//	s = (h / 3) * (pow(sin(a), 2) + 1 + 4 * (pow(sin(a + h), 2) + 1) + 4 * s1 + 2 * s2 + pow(sin(b), 2) + 1);
//	cout << "s = " << s << endl;
//}

//Дихотомия
#include <iostream>
using namespace std;
void main()
{
	double e = 0.0001, x, a = -2, b = 1;
	while (abs(a - b) > (2 * e))
	{
		x = (a + b) / 2;
		if ((sin(a) + 2 + a) * (sin(x) + 2 + x) <= 0)
		b = x;
		else a = x;
	}
	cout << "x = " << x << endl;
}