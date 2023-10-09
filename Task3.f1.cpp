#include <math.h>
module student2;
double RBPO::Lab2::Variant13::Task3::f1(double x, double y)
{
	double res;
	res = (sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x));
	return res;
}

