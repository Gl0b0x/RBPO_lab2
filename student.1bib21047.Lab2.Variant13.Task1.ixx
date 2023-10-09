module;
#include <math.h>
export module student;

namespace RBPO
{
	namespace Lab2
	{
		namespace Variant13
		{
			namespace Task1
			{
				export double f1(double x, double y)
				{
					double res;
					res = (sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x));
					return res;
				}
				export double f2(double x)
				{
					double res;
					x >= 0 ? res = cos(2 * x) : res = 1 / (x * x + 1);
					return res;
				}
				export double a(int i)
				{
					return pow(-1, i % 2) * ((1 + 3 * i) / pow(3, i));
				}
				export double f3(int n)
				{
					double sum = 0;
					for (int i = 0; i <= n; i++)
					{
						sum += a(i);
					}
					return sum;
				}
				export double f4(double epsilon)
				{
					double pred = a(0);
					double now;
					double sum = pred;
					for (int i = 1; ;i++)
					{
						now = a(i);
						sum += now;
						if (fabs(now - pred) <= epsilon)
						{
							return sum;
						}
						pred = now;
					}
				}
			}
		}
	}
}