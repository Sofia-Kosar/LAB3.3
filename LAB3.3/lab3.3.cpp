// Lab_03_3.cpp
// < ����� ����� ³������� >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 10
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
    double R; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
	if (x <= -8 - R)
		y = R;
	else
		if (-8 - R  < x && x <= -8 + R)
			y = R - sqrt( pow (R, 2) - pow ((x + 8), 2));
		else
			if (-8 + R < x && x <= -4)
				y = R;
			else
				if (-4 < x && x <= 2)
					y = ( -R - x - 4 - R * x ) / 3;
				else
					y = x - 3;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}