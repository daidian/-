#include"circle04.h"
double Circle::Area()
{
//	Radius*=2;
	double a=Getradius();
	return PI*Radius*Radius;
}
double Circle::Circumference()
{
	return 2*Radius*PI;
}
double Circle::Getradius()const
{
//	Radius*=2;
//	double a=Area();
	return Radius;
}