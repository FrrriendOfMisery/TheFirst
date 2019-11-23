#include "pch.h"
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

void PrintMap(const map<string, string>& m)
{
	for (auto i : m)
	{
		cout << i.first << ": " << i.second << endl;
	}
	cout << endl;
}

void Rename(map<string, string>& m, string name, string new_name)
{
	m[new_name] = m[name];
	m.erase(name);
}
void Change(map<string, string>& m, string country, string new_capital)
{
	m[country] = new_capital;
}

void About(map<string, string>& m, string s)
{
	cout << "The capital of " << s <<  " is " << m[s] << endl;
}

void Dump(map<string, string>& m)
{
	for (auto i : m)
		cout << i.second << "  ";
	cout << endl;
}

int main()
{
	map<string, string> m;
	m["Belarus"] = "Minsk";
	PrintMap(m);
	Rename(m, "Belarus", "USA");
	Change(m, "USA", "Washington DC");
	cout << "result\n";
	PrintMap(m);
	About(m, "USA");
	Dump(m);
}