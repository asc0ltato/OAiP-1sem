//Трапеция
//#include <iostream>
//using namespace std;
//void main()
//{
//	int a = 1, b = 3;
//	double s = 0, h, x;
//	const double n = 200;
//	h = (b - a) / n;
//	x = a;
//	for (x; x < (b - h);x = x + h)
//	{
//		s = s + h * ((pow(x, 3) - 3) + (pow(x + h, 3) - 3)) / 2;
//	}
//	cout << "s = " << s << endl;
//}

//Парабола
//#include <iostream>
//using namespace std;
//int main()
//{
//	int  a = 1, b = 3, i = 1;
//	double x, h, s, s1 = 0, s2 = 0;
//	const double n = 200;
//	h = (b - a) / (2 * n);
//	x = a + 2 * h;
//	for (i; i < n; i++)
//	{
//		s2 += pow(x, 3) - 3;
//		x += h;
//		s1 += pow(x, 3) - 3;
//		x += h;
//	}
//	s = (h / 3) * ((pow(a, 3) - 3) + 4 * (pow(a + h, 3) - 3) + 4 * s1 + 2 * s2 + (pow(b, 3) - 3));
//
//	cout << "s = " << s << endl;
//}

//Дихотомия
#include <iostream>
using namespace std;
void main()
{
	double a = 0, b = 2, e = 0.0001, x;
	while (abs(a - b) > (2 * e))
	{
		x = (a + b) / 2;
		if ((pow(x, 3) + x - 3) * (pow(a, 3) + a - 3) <= 0)
		b = x;
		else a = x;
	}
	cout << "x = " << x << endl;
}