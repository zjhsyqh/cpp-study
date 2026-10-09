//递增运算符重载
#include<iostream>
class MyIntrger
{
	friend std::ostream& operator<<(std::ostream& cout,const  MyIntrger &a);
public:
	MyIntrger()
	{
		m_Num = 0;
		m_A = 100;
		m_B = 1000;
	}

	//重载前置++运算符 返回引用为了对同一个数据进行操作
	MyIntrger& operator++()
	{
		//先进行++计算
		m_Num++;
		m_A++;
		m_B++;
		//将自身作为一个返回
		return *this;
	}

	//重载后置++运算符
	 //int可以用于区分前置和后置递增
	//后置递增徐返回值，若返回引用（temp已被释放掉）非法操作
	MyIntrger operator++(int)
	{
		//先记录当时结果
		MyIntrger temp=*this;
		//后递增
		m_Num++;
		m_A++;
		m_B++;
		//最后记录结果返回
		return temp;
	}
private:
	int m_Num;
	int m_A;
	int m_B;
};
std::ostream& operator<<(std::ostream& cout, const MyIntrger &all)
{
	std::cout << "m_Num=" << all.m_Num
		<<" "<<"m_A="<<all.m_A 
		<<" "<<"m_B="<< all.m_B << '\n';
	return cout;
}

void test1()
{
	MyIntrger a;
	std::cout << ++(++a);
}
void test2()
{
	MyIntrger a;
	std::cout << a++;
	std::cout << a;
}
int main()
{
	test1();
	test2();
	return 0;
}