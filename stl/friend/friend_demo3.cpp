
//成员函数作友元
#include<iostream>
#include<string>
class Building;
class GoodGay
{
public:
	GoodGay();
	void visit1(); //让visit可以访问Building中私有成员
	void visit2();//让visit不可以访问Building中私有成员
	Building * a;
};
class Building
{
	//goodgay类下的visit成员函数是Building好朋友，可以访问Building中私有成员
	friend void GoodGay::visit1();
public:
	Building();
	std::string m_SittingRoom;
private:
	std::string m_BedRoom;
};
Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}
GoodGay::GoodGay()
{
	a = new Building;
}
void GoodGay::visit2()
{
	std::cout<< "好基友2正在访问：" << a->m_SittingRoom << '\n';
}
void GoodGay::visit1()
{
	std::cout << "好基友1正在访问：" << a->m_SittingRoom << '\n';
	std::cout << "好基友1正在访问：" << a->m_BedRoom << '\n';
}

	
void test01()
{
	GoodGay aa;
	aa.visit2();
	aa.visit1();
}
int main()
{
	test01();
	return 0;
}