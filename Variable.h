#pragma once
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Variable
{
	string Input;
	string Inp;
	string m_username;
	string m1_username;
	int x;
	int x2;
	bool flag3;
public:
	Variable();
	string GetInput();
	bool Check(string Input);
	void SaveTofile(string i);
	void Display();
	//bool Existing(string va);
	//void Update();
};