//2.������� 3 ���� ����� �, ������� � ������� n �� ����� ������, � �������� � ����� �, ������� � ������� m.
#include <iostream>
#include <stdio.h>
using namespace std;
void main()
{
	setlocale(0, "");
	char tmp[33];
	int A, B, n, m;
	cout << "������� A: ", cin >> A;
	cout << "������� B: ", cin >> B;
	cout << "������� n: ", cin >> n;
	cout << "������� m: ", cin >> m;
	_itoa_s(A, tmp, 2); cout << "����� A " << tmp << endl;
	_itoa_s(B, tmp, 2); cout << "����� B " << tmp << endl;
	B ^= 7 << m;
	B |= ((A & (7 << n)) >> n) << m;
	_itoa_s(B, tmp, 2); cout << "B = " << tmp << endl;
}