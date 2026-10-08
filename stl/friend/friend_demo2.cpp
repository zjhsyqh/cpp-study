//类作友元
#include<iostream>
#include<string>
class Building
{
	friend class GoodGay;  //类作友元 
public:
	Building();
	std::string m_SittingRoom;
private:
	std::string m_BedRoom;
};

class GoodGay
{
public:
	void visit();
	GoodGay();
	Building *a;
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
void GoodGay::visit()
{
	std::cout << "好基友正在访问：" << a->m_SittingRoom << '\n';
	std::cout << "好基友正在访问：" << a->m_BedRoom << '\n';
}
int main()
{
	GoodGay aa;
	aa.visit();
	return 0;
}