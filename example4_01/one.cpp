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
int main()
{
	cout<<"The number of students is"<<Student::total<<endl;
	Student *p=new Student(13);
	cout<<"The number of students is"<<Student::total<<endl;
	cout<<"The number of students is"<<p->total<<endl;
	delete p;
	cout<<"The number of students is"<<p->total<<endl;
	Student s[2];
	cout<<"The number of students is"<<s[0].total<<endl;
	cout<<"The number of students is"<<s[1].total<<endl;
	system("pause");
	return 0;
}




