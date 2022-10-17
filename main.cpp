#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>
#include <map>
std::vector<std::vector<size_t>> delt{};
std::vector<size_t> nums{};
std::string pust;
size_t counter = 0;
size_t count_last = 0;
size_t count_first = 0;
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





bool not_33(std::string& st)
{
	size_t temp_n = 2;

	for (size_t i = 0; i < st.length(); i++)
	{
		if (st[i] == '1') temp_n += 1;
		if (st[i] == '2') temp_n += 3;
		if (st[i] == '3') temp_n *= 2;
		if (temp_n == 33) return false;
	}

	return true;
}
bool not_2x(std::string& st)
{
	for (size_t i = 1; i < st.length(); i++)
	{
		if (st[i - 1] == '3' && st[i] == '3') return false;
	}
	return true;
}
bool is_51(std::string& st)
{
	size_t temp_n = 2;

	for (size_t i = 0; i < st.length(); i++)
	{
		if (st[i] == '1') temp_n += 1;
		if (st[i] == '2') temp_n += 3;
		if (st[i] == '3') temp_n *= 2;
	}

	if (temp_n != 51) return false;
	return true;
}
bool is_18(std::string& st)
{
	bool flag1 = false;
	bool flag2 = false;
	size_t temp_n = 2;
	for (size_t i = 0; i < st.length(); i++)
	{
		if (st[i] == '1') temp_n += 1;
		if (st[i] == '2') temp_n += 2;
		if (st[i] == '3') temp_n *= 3;
		if (temp_n == 15) flag1 = true;
		if (temp_n == 30) flag2 = true;
	}

	if (flag1 && flag2) return true;
	return false;
}
//size_t f(size_t start, size_t end, size_t current, std::string& pust)
//{
//	std::string previous = pust;
//	if (current == 1) previous += '1';
//	if (current == 2) previous += '2';
//	if (current == 3) previous += '3';
//
//	for (size_t i = 1; i < previous.size(); i++)
//	{
//		if (previous[i - 1] == '3' && previous[i] == '3')
//		{
//			previous.pop_back();
//			return 0;
//		}
//	}
//
//	if (start > end || start == 12 || start == 20)
//	{
//		previous.pop_back();
//		return 0;
//	}
//
//	if (start == end)
//	{
//		if (is_18(previous))
//			counter++;
//		//std::cout << counter << '\n';
//		//std::cout << previous << '\n';
//		previous.pop_back();
//		return 1;
//	}
//	else
//	{
//		return f(start + 1, end, 1, previous) + f(start + 2, end, 2, previous) + f(start * 3, end, 3, previous);
//	}
//}

//size_t f(size_t start, size_t end, size_t current, std::string& pust)
//{
//	std::string previous = pust;
//	if (current == 1) previous += '1';
//	if (current == 2) previous += '2';
//	if (current == 3) previous += '3';
//
//	for (size_t i = 1; i < previous.size(); i++)
//	{
//		if (previous[i - 1] == '3' && previous[i] == '3')
//		{
//			previous.pop_back();
//			return 0;
//		}
//	}
//
//	if (start > end || start == 33)
//	{
//		previous.pop_back();
//		return 0;
//	}
//
//	if (start == end)
//	{
//		if (start == 18 && previous[previous.length() - 1] == '3') count_last++;
//		if (start == 51 && previous[0] == '3') count_first++;
//		//if (is_18(previous))
//			//counter++;
//		//std::cout << counter << '\n';
//		//std::cout << previous << '\n';
//		previous.pop_back();
//		return 1;
//	}
//	else
//	{
//		return f(start + 1, end, 1, previous) + f(start + 3, end, 2, previous) + f(start * 2, end, 3, previous);
//	}
//}



size_t add1(size_t n) { return n + 1; }
size_t add2(size_t n) { return n + 2; }
size_t pr(size_t n) { return n * 2; }
struct MyKey
{
	size_t n_;
	size_t count_;
	bool repeat_;
};

std::map<MyKey, int> mp;


size_t f(size_t start, size_t count, bool repeat)
{
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

	//f(2, 38, 0, pust);;
	//std::cout << f(2, 18, 0, pust) * f(18, 51, 0, pust) - count_last * count_first << '\n';
	//std::cout << counter << '\n';



	return 0;
}