#include<iostream>
#include<vector>
int main()
{
	std::vector<int> v;
	int n;
	std::cin >> n;
	while (n--)
	{
		int x;
		std::cin >> x;
		v.push_back(x);
	}
	int len = v.size();
	std::cout << "Length of vector is: " << len << std::endl;
	if (len > 5)
	{
		for (int i = 0;i < 3;i++)
		{
			v.erase(v.begin());
		}
	}
	std::cout << "Vector elements after erasing first 3 elements are: ";
	for (auto num : v)
	{
		std::cout << num << " ";
	}

	return 0;
}