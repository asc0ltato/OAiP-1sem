//2.Извлечь 3 бита числа А, начиная с позиции n по счету справа, и вставить в число В, начиная с позиции m.
#include <iostream>
#include <stdio.h>
using namespace std;
void main()
{
	setlocale(0, "");
	char tmp[33];
	int A, B, n, m;
	cout << "Введите A: ", cin >> A;
	cout << "Введите B: ", cin >> B;
	cout << "Введите n: ", cin >> n;
	cout << "Введите m: ", cin >> m;
	_itoa_s(A, tmp, 2); cout << "Число A " << tmp << endl;
	_itoa_s(B, tmp, 2); cout << "Число B " << tmp << endl;
	B ^= 7 << m;
	B |= ((A & (7 << n)) >> n) << m;
	_itoa_s(B, tmp, 2); cout << "B = " << tmp << endl;
}
