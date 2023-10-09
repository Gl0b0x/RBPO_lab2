#include <math.h>
module student2;

double RBPO::Lab2::Variant13::Task3::a(int i)
{
	return pow(-1, i % 2) * ((1 + 3 * i) / pow(3, i));
}