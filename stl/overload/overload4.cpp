//赋值运算符重载
#include<iostream>
class Person
{
public:
	int* m_Age;
	Person(int age)
	{
		m_Age = new int(age);  //开辟到堆区，用指针维护这个数据
	}
	~Person()  //堆区由程序员开辟由程序员释放
	{
		if (m_Age != NULL)
		{
			delete m_Age;         //单纯写这个会导致堆区内存重复释放 
			m_Age = NULL;         //利用深拷贝来解决浅拷贝的问题
		}                         //再次开辟一个堆区 分别释放
	}
	//重载赋值运算
	Person & operator=(Person& p)
	{                            
		//给p2=p1进行赋值时需确保p2的堆区无属性，如果有需释放，后深拷贝
		if (m_Age != NULL)
		{
			delete m_Age;         
			m_Age = NULL;        
		}
		//深拷贝操作
		//括号里为确认堆区大小，传入原本属性内存空间便于操作
		m_Age = new int(*p.m_Age); 
		return *this;
	}
};
void test()
{
	Person p1(18);
	Person p2(200);
	Person p3(300);
	//p3报错：p2被赋值后，函数返回的是void，p3无法被赋值
	//返回它本身 链式思想
	p3= p2 = p1;   
	std::cout << *p1.m_Age;
	std::cout << '\n';
	std::cout << *p2.m_Age;
	std::cout << '\n';
	std::cout << *p3.m_Age;
}
int main()
{
	test();
	return 0;
}
