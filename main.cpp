#include <iostream>
import student;
import student1;
import student2;
import student3;
import student4;

using std::cout;
using std::cin;
using std::endl;
void print(double x, double y, double f1, double x2, double f2, int i2, double f3, double epsilon, double f4);
int main()
{
	int choice, i2;
	double x, y, x2, epsilon;
	int choice2 = 0;
	setlocale(LC_ALL, "ru");
	while (1)
	{
		if (choice2 == 0)
		{
			cout << "������� �������� x, y ��� ������� f1(x, y)" << endl;
			cin >> x >> y;
			cout << "������� �������� x ��� ������� f2(x)" << endl;
			cin >> x2;
			cout << "������� ����� ����� ������������������ a, �� �������� ��������� ����� ������������������ ��� ������� f3(n)" << endl;
			cin >> i2;
			cout << "������� ��������, �� ������� �������� ���� ������������������ ��� ������� f4(n)" << endl;
			cin >> epsilon;
		}
		cout << "\t\t\t����\t\t\t" << endl;
		cout << "1 - 1 �������" << endl;
		cout << "2 - 2 �������" << endl;
		cout << "3 - 3 �������" << endl;
		cout << "4 - 4 �������" << endl;
		cout << "5 - 5 �������" << endl;
		cout << "0 - ����� �� ���������" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "\t\t\t����� ������� �������\t\t\t" << endl;
			print(x, y, RBPO::Lab2::Variant13::Task1::f1(x, y), x2, RBPO::Lab2::Variant13::Task1::f2(x2), i2, RBPO::Lab2::Variant13::Task1::f3(i2), epsilon, RBPO::Lab2::Variant13::Task1::f4(epsilon));
			break;
		case 2:
			cout << "\t\t\t����� ������� �������\t\t\t" << endl;
			print(x, y, RBPO::Lab2::Variant13::Task2::f1(x, y), x2, RBPO::Lab2::Variant13::Task2::f2(x2), i2, RBPO::Lab2::Variant13::Task2::f3(i2), epsilon, RBPO::Lab2::Variant13::Task2::f4(epsilon));
			break;
		case 3:
			cout << "\t\t\t����� �������� �������\t\t\t" << endl;
			print(x, y, RBPO::Lab2::Variant13::Task3::f1(x, y), x2, RBPO::Lab2::Variant13::Task3::f2(x2), i2, RBPO::Lab2::Variant13::Task3::f3(i2), epsilon, RBPO::Lab2::Variant13::Task3::f4(epsilon));
			break;
		case 4:
			cout << "\t\t\t����� ���������� �������\t\t\t" << endl;
			print(x, y, RBPO::Lab2::Variant13::Task4::f1(x, y), x2, RBPO::Lab2::Variant13::Task4::f2(x2), i2, RBPO::Lab2::Variant13::Task4::f3(i2), epsilon, RBPO::Lab2::Variant13::Task4::f4(epsilon));
			break;
		case 5:
			cout << "\t\t\t����� ������ �������\t\t\t" << endl;
			print(x, y, RBPO::Lab2::Variant13::Task5::f1(x, y), x2, RBPO::Lab2::Variant13::Task5::f2(x2), i2, RBPO::Lab2::Variant13::Task5::f3(i2), epsilon, RBPO::Lab2::Variant13::Task5::f4(epsilon));
			break;
		case 0:
			return 0;
		default:
			cout << "�������� ����" << endl;
			break;
		}
		cout << "�������� ���������� �������� ����������?" << endl;
		cout << "1 - ��������" << endl;
		cout << "0 - ������ �����" << endl;
		cin >> choice2;
	}
	return 0;
}

void print(double x, double y, double f1, double x2, double f2, int i2, double f3, double epsilon, double f4)
{
	printf("f1(%f, %f) = %f\n", x, y, f1);
	printf("f2(%f) = %f\n", x2, f2);
	printf("f3(%d) = %f\n", i2, f3);
	printf("f4(%f) = %f\n", epsilon, f4);
}