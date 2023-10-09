#include <math.h>
module student2;

double RBPO::Lab2::Variant13::Task3::f3(int n)
{
	double sum = 0;
	for (int i = 0; i <= n; i++)
	{
		sum += a(i);
	}
	return sum;
}