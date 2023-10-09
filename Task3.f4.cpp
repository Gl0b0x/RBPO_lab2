#include <math.h>
module student2;

double RBPO::Lab2::Variant13::Task3::f4(double epsilon)
{
	double pred = a(0);
	double now;
	double sum = pred;
	for (int i = 1; ; i++)
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