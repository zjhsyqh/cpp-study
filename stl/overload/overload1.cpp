#include<iostream>
class Person
{
public:
	int m_A;
	int m_B;
	//成员函数重载+号
	/*Person operator + (Person & p)
	{
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}*/
};
//全局函数重载
Person operator*(Person& p1, Person& p2)
{
	Person temp;
	temp.m_A = p1.m_A * p2.m_A;
	temp.m_B = p1.m_B * p2.m_B;
	return temp;
}
void test()
{
	Person p1;
	int m, n;
	std::cin >> m >> n;
	p1.m_A = m;
	p1.m_B = n;
	Person p2;
	int a, b;
	std::cin >> a >> b;
	p2.m_A = a;
	p2.m_B = b;
	Person p3 = p1 * p2;
	std::cout << p3.m_A << '\n';
	std::cout << p3.m_B << '\n';
}
int main()
{
	test();
	return 0;
}

