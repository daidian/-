#ifndef _Circle04
#define _Circle04
class Circle
{
private:
	double Radius;
	const double PI;
public:
	Circle(double r=0):PI(3.1415926)
	{
		Radius=r;
	}
	double Area();
	double Circumference();
	double Getradius()const;
};
#endif