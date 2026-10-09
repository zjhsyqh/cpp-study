#include<iostream>
class Person
{
	/*friend void test();*/
	friend std::ostream& operator << (std::ostream& cout, Person& aa);
public:
	void set(int a,int b)
	{
		m_A = a;
		m_B = b;
	}
private:
	int m_A;
	int m_B;
};
//重载左移运算符
std::ostream & operator << (std::ostream & cout, Person & aa)  //使用了链式形式
{
	std::cout << "m_A=" << aa.m_A << " " << "m_B=" << aa.m_B << '\n';
	return cout;
}
void test()
{
	int x, y;
	std::cin >> x >> y;
	Person aa;
	aa.set(x, y);
	/*aa.m_A = x;
	aa.m_B = y;*/
	std::cout << aa << std::endl;
}
int main()
{
	test();

	return 0;
}
