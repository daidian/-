#include<iostream>
#include"Circle04.h"
using namespace std;
int main()
{
	Circle c1(3.5),c2;
	cout<<"radius of c1="<<c1.Getradius()<<" , circumference of c1="<<c1.Circumference()<<" , area of c1="<<c1.Area()<<endl;
	cout<<"redius of c2="<<c2.Getradius()<<" , circumference of c2="<<c2.Circumference()<<" , area of c2="<<c2.Area()<<endl;
	system("pause");
	return 0;
}
