#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool Palindrom(string s) {
	int l = s.length();
	for (int i = 0; i < l / 2; i++) {
		if (s[i] != s[l - i - 1])
			return false;
	}
	return true;
}

vector<string> PalindromFilter(vector<string>& v, int minLenght)
{
	vector<string> result;
	for (auto s : v)
	{
		if (int(s.length()) >= minLenght)
			if (Palindrom(s))
				result.push_back(s);
	}
	return result;
}

void PrintVector(vector<string> v) {
	for (auto i : v)
		cout << i << "  ";
	cout << endl;
}


int main()
{
	vector<string> v = { "aaabbbaaa", "aacb", "ioi", "rlkgf"};
	cout << "result: " << Palindrom("aabbaa") << endl;
	PrintVector(v);
	PrintVector(PalindromFilter(v, 4));
	system("pause");
	return 0;
}