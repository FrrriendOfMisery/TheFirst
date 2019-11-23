#include "pch.h"
#include <iostream>
#include <map>
#include <string>
#include <set>
using namespace std;

void PrintMap(const map<int, string>& m)
{
	for (auto i : m)
	{
		cout << i.first << ": " << i.second << endl;
	}
	cout << endl;
}

void PrintSet(const set<string>& s)
{
	for (auto i : s)
		cout << i << "  ";
	cout << endl;
}

set<string> BuildSet(map<int, string>& m)
{
	set<string> result;
	for (auto i : m)
		result.insert(i.second);
	return result;
}

int main()
{
	map<int, string> m;
	m[1] = "odd";
	m[2] = "even";
	m[3] = "odd";
	m[4] = "even";
	PrintMap(m);
	set<string> x = BuildSet(m);
	cout << "result \n";
	PrintSet(x);
}