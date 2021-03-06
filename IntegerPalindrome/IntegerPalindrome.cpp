// IntegerPalindrome.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0) return false;
		long ans = 0;
		long check = x;
		while (x) {
			long temp = ans * 10 + x % 10;
			if (temp / 10 != ans)
				return 0;
			ans = temp;
			x /= 10;
		}
		return ans == check;
	}
};

int main()
{
	Solution joe;
	int bob = -2147447412;
	int susan = 2222;

	std::cout << joe.isPalindrome(bob) << std::endl;
	std::cout << joe.isPalindrome(susan) << std::endl;

    return 0;
}

//bool isPalindrome(int x) {
//	//int s = 1;
//	//if (x < 0) {
//	//	x *= -1;
//	//	s *= -1;
//	//}
//	std::string a(std::to_string(x));
//	std::string b(a);
//	std::reverse(b.begin(), b.end());
//
//	return atoi(a.c_str()) == atoi(b.c_str());
//}