//Трапеция
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 2, b = 3;
//	double s = 0, h, x;
//	const double n = 200;
//	h = (b - a) / n;
//	x = a;
//	for (x; x < (b - h); x = x + h)
//	{
//		s = s + h * ((exp(x) - 1.00 / x) + (exp(x + h) - 1.00 / (x + h))) / 2;
//	}
//	cout << "s = " << s << endl;
//}

//Парабола
//#include <iostream>
//using namespace std;
//int main()
//{
//	int  a = 2, b = 3, i = 1;
//	double x, h, s, s1 = 0, s2 = 0;
//	const double n = 200;
//	h = (b - a) / (2 * n);
//	x = a + 2 * h;
//	for (i; i < n; i++)
//	{
//		s2 = s2 + (exp(x) - 1.00 / x);
//		x += h;
//		s1 = s1 + (exp(x) - 1.00 / x);
//		x += h;
//	}
//	
//	s = (h / 3) * ((exp(a) - 1.00 / a) + 4 * (exp(a + h) - 1.00 / (a + h)) + 4 * s1 + 2 * s2 + (exp(b) - 1.00 / b));
//	cout << "s = " << s << endl;
//}

//Дитохомия
#include <iostream>
using namespace std;
void main()
{
	double e = 0.0001, x, a = 0.5, b = 2;
	while (abs(a - b) > (2 * e))
	{
		x = (a + b) / 2;
		if ((exp(x) - 3 - 1.00 / x) * (exp(a) - 3 - 1.00 / a) <= 0) b = x;
		else a = x;
	}
	cout << "x = " << x << endl;
}