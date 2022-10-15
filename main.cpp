#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>
std::vector<std::vector<size_t>> delt{};
std::vector<size_t> nums{};
std::string pust;

//size_t f(size_t start, size_t end, size_t current)
//{
//	if (!delt.empty()) nums = delt[delt.size() - 1];
//	nums.push_back(current);
//	delt.push_back(nums);
//
//	for (size_t i = 1; i < delt[delt.size() - 1].size(); i++)
//	{
//		if ((delt[delt.size() - 1][i - 1] == 1) && (delt[delt.size() - 1][i] == 1)) 
//		{
//			//delt.pop_back();
//			delt.clear();
//			nums.clear();
//			return 0;
//		}
//	}
//
//
//	if (start > end || start == 33)
//	{
//		nums.clear();
//		delt.clear();
//		return 0;
//	}
//	if (start == end)
//	{
//		nums.clear();
//		delt.clear();
//		return 1;
//	}
//	else
//	{
//		auto f1 = f(start * 2, end, 1);
//		delt.clear();
//		nums.clear();
//		auto f2 = f(start + 1, end, 2);
//		delt.clear();
//		nums.clear();
//		auto f3 = f(start + 3, end, 3);
//		delt.clear();
//		nums.clear();
//		return f1 + f2 + f3;
//	}
//}


size_t f(size_t start, size_t end, size_t current, std::string& pust)
{
	std::string previous = pust;
	if (current == 1) previous += '1';
	if (current == 2) previous += '2';
	if (current == 3) previous += '3';

	for (size_t i = 1; i < previous.size(); i++)
	{
		if (previous[i - 1] == '1' && previous[i] == '1')
		{
			return 0;
		}
	}
	if (start > end || start == 23)
	{
		return 0;
	}

	if (start == end)
	{
		//std::cout << previous << '\n';
		previous.pop_back();
		return 1;
	}
	else
	{
		return f(start + 1, end, 1, previous) + f(start + 2, end, 2, previous) + f(start * 2, end, 3, previous);
	}
}

int main()
{
	/*std::string st1, st2, st3;
	std::cin >> st1 >> st2 >> st3;
	std::vector<std::string*> strings = { &st1, &st2, &st3 };
	std::string ans = "";
	
	size_t maxx_size = std::max(std::max(st1.size(), st2.size()), st3.size());

	for (size_t i = 0; i < strings.size(); i++)
	{
		if (strings[i]->size() != maxx_size)
		{
			for (size_t j = 0; j < maxx_size - strings[i]->size(); j++)
			{
				*(strings[i]) = '0' + *(strings[i]);
			}
		}
	}
	std::cout << std::max(std::max(st1, st2), st3);*/

	
	std::cout << f(3, 11, 0, pust) * f(11, 79, 0, pust) << '\n';
	
	return 0;
}