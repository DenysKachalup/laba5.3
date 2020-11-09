#include <iostream>
#include <cmath>
using namespace std;

double f(const double x)
{
	if (abs(x) >= 1)
		return (2 * sin(x) + 1 / sin(x) + cos(x) * cos(x));
	else
	{
		double S = 0;
		int n = 0;
		double a = 1;
		S = a;
		do
		{
			n++;
			double R = pow(x, 4 * n + 2) / (4 * (n * n));
			a *= R;
			S += a;
		} while (n <= 7);
		return S;
	}
}
int main()
{
	double tp, tk, z;
	int n;
	cout << "tp = "; cin >> tp;
	cout << "tk = "; cin >> tk;
	cout << "n = "; cin >> n;
	double tg = (tk - tp) / n;
	double t = tp;
	while (t <= tk)
	{
		z = f(2*t) + pow(f(t * t + 1), 2);
		cout << t << "\t " << z << endl;
		t += tg;
	}
	return 0;
}