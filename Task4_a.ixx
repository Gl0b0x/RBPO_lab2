module;
#include <math.h>
export module student3:a;
namespace RBPO
{
	namespace Lab2
	{
		namespace Variant13
		{
			namespace Task4
			{
				double a(int i)
				{
					return pow(-1, i % 2) * ((1 + 3 * i) / pow(3, i));
				}
			}
		}
	}
}
