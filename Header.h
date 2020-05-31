#pragma once
#include<iostream>
using namespace std;

class MyString
{
	char* str;
	int len;
	static int strcount;
public:
	MyString() :MyString("", 80) {}
	MyString( char* str) 
	{
		this->len = strlen(str);
		this->str = new char[len + 1];
		strcpy(this->str, str);
		strcount++;
	}
	MyString(const char* str,int len) 
	{
		this->len = len;
		this->str = new char[len + 1];
		strcpy(this->str, str);
		strcount++;
	}

	MyString(const MyString& obj)
	{
		len = obj.len;
		this->str = new char[len + 1];
		strcpy(this->str, obj.str);
		cout << "Constructor copy" << endl;
		strcount++;
	}

	void StrCin();
	
	~MyString()
	{
		delete[] str;
		strcount--;
	}
	int getSize()
	{
		return len;
	}
	char* getString()
	{
		return str;
	}

	static int GetStrCount();
};

int MyString::strcount = 0;


inline int MyString::GetStrCount()
{
	return strcount;
} 
inline void MyString::StrCin()
{
	
		char res[256];
		cin.getline(res, 256);

		this->len = strlen(res);
		this->str = new char[len + 1];
		strcpy(this->str, res);
	
}

