#include<iostream>
using namespace std;
class Student
{
private:
	int num;
	char name[20];
	static int total;
public:

	Student()
	{
		total++;
	}
	Student(int n,char *p="wang");
	~Student()
	{
		total--;
	}
	void GetName();
	int GetNum();
	static void Print();
};
int Student::total=0;
Student::Student(int n,char *p)
{
	num=n;
	strcpy(name,p);
	total++;
}
void Student::GetName()
{
	cout<<name<<endl;
}
int Student::GetNum()
{
	return num;
}
void Student::Print()
{
	cout<<"The number of students:"<<total<<endl;
}
int main()
{
	Student::Print();
	Student *p=new Student(13);
	Student::Print();
	p->Print();
	delete p;
	p->Print();
	Student s[2];
	Student::Print();
	Student::Print();
	system("pause");
	return 0;
}




