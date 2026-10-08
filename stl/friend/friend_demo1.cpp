#include<iostream> //全局函数作友元
#include<string>
class Building
{
	//goodgay全局函数是Building好朋友，可以访问Building中私有成员
	friend void goodgay(Building& a);
public:
	Building()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
public:
	std::string m_SittingRoom;
private:
	std::string m_BedRoom;
};
void goodgay(Building &a)
{
	std::cout << "好基友访问：" << a.m_SittingRoom << '\n';
	std::cout << "好基友访问：" << a.m_BedRoom << '\n';
}

void test1()
{
	Building a;
	goodgay(a);
}


int main()
{
	test1();
	return 0;
}