module;
#include <math.h>
export module student3:f2;

namespace RBPO
{
	namespace Lab2
	{
		namespace Variant13
		{
			namespace Task4
			{
				export double f2(double x)
				{
					double res;
					x >= 0 ? res = cos(2 * x) : res = 1 / (x * x + 1);
					return res;
				}
			}
		}
	}
}
