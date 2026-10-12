//函数运算符重载（仿函数）
#include<iostream>
#include<string>
class  Print
{
public:
	void operator()(std::string test)
	{
		std::cout << test << '\n';
	}
};
class Add
{
public:
	int operator()(int x,int y)
	{
		return x + y;
	}
};
void test1()
{
	Print aa;
	aa("hello world");
}
void test2()
{
	Add aa;
	int x, y;
	std::cin >> x >> y;
	std::cout << aa(x, y) << '\n';
}
int main()
{
	test1();
	test2();

	return 0;
}