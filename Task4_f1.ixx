module;
#include <math.h>
export module student3:f1;
//export module student3:f1;

namespace RBPO
{
	namespace Lab2
	{
		namespace Variant13
		{
			namespace Task4
			{
				export double f1(double x, double y)
				{
					double res;
					res = (sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x));
					return res;
				}
			}
		}
	}
}
