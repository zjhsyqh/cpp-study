//关系运算符重载
#include<iostream>
#include<string>
class Person
{
public:
	int m_Age;
	std::string m_Name;
	Person(std::string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	//关系运算符重载
	bool operator==(const Person& p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return true;
		}
		else { return false; }
	}
	bool operator!=(const Person& p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return false;
		}
		else { return true; }
	}
};
void test()
{
	Person p1("ZZM", 18);
	Person p2("CCH", 18);
	if (p1 == p2)
	{
		std::cout << "p1和p2相等" << '\n';
	}
	else
	{
		std::cout << "p1和p2不相等" << '\n';
	}
	if (p1!= p2)
	{
		std::cout << "p1和p2不相等" << '\n';
	}
	else
	{
		std::cout << "pi1和p2相等" << '\n';
	}
}
int main()
{
	test();
	return 0;
}