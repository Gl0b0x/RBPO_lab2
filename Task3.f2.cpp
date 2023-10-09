#include <math.h>
import student2;
double RBPO::Lab2::Variant13::Task3::f2(double x)
{
	double res;
	x >= 0 ? res = cos(2 * x) : res = 1 / (x * x + 1);
	return res;
}