//1.	������� 5 ����� ����� A, ������� �� ������� � �������� �� � ����� B, ������� � �������� ����.
#include <iostream> // 652 � 32
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int A;
	int A_mask = 07; // = 111b
	int B;
	char tmp[33];
	cout << "������� ����� A: ";
	cin >> A;
	cout << "������� ����� B: ";
	cin >> B;
	cout << " " << endl;
	cout << "����� A: " << A << endl;
	_itoa_s(A, tmp, 2);
	cout << "������������� ����� � �������� ����: " << tmp << endl;
	cout << " " << endl;
	cout << "����� B: " << B << endl;
	_itoa_s(B, tmp, 2);
	cout << "������������� ����� � �������� ����: " << tmp << endl;
	A >>= 2;
	A &= A_mask;
	B <<= 5;
	B |= A;
	B <<= 2;
	cout << " " << endl;
	cout << "����� B = " << B << endl;
	_itoa_s(B, tmp, 2);
	cout << "������������� ����� � �������� ����: " << tmp << endl;
	return 0;
}