#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"Header.h"
using namespace std;

int main()
{
	MyString A;
	MyString b;
	cout<<MyString::GetStrCount() << "\n" ;
	MyString v;
	A.StrCin();
	cout<<A.getString() << "\n";
	cout << MyString::GetStrCount();
	
	
}