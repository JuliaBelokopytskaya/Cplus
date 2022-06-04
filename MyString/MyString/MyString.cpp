#include<iostream>
using namespace std;
#include<string.h>

class MyString
{
	char* str;

public:
	MyString();
	MyString(int);
	MyString(char*);
	MyString(const MyString&);
	~MyString();
	void Set(void);
	MyString pushStr(void);
	bool check(char);
	void Print();
};
MyString::MyString(char* _str)
{
	cout << "Constructor with parameter" << endl;
	if (_str == nullptr) {
		str = new char[1];
		str[0] = '\0';
	}
	else
	{
		str = new char[strlen(_str) + 1];
		for (int i = 0; i < strlen(_str); i++)
			str[i] = _str[i];
		str[strlen(_str)] = '\0';
	}
}
MyString::MyString(int n) {
	cout << "Constructor with parameter" << endl;
	if (n) {
		str = new char[n + 1];
		str[n] = '\0';
	}
	else
	{
		str = new char[1];
		str[0] = '\0';
	}
}
MyString::MyString() :str{ nullptr } {
	str = new char[1];
	str[0] = '\0';
	cout << "Constructor without parameters" << endl;
}
MyString::MyString(const MyString& s)
{
	cout << "Constructor copy" << endl;
	str = new char[strlen(s.str) + 1];
	for (int i = 0; i < strlen(s.str); i++)
		str[i] = s.str[i];
	str[strlen(s.str)] = '\0';
}
MyString::~MyString()
{
	cout << "Destructor" << endl;
	delete str;
}
void MyString::Print()
{
	cout << "Print string" << endl;
	if (strlen(str) > 0) {
		for (unsigned j = 0; j < strlen(str); j++)
			cout << str[j];
	}
	cout << endl;
}
bool MyString::check(char ch)
{
	int count = 0;
	cout << "Check string" << endl;
	for (int i = 0; i < strlen(str); i++) {
		if (ch == str[i])
			count++;
	}
	if (count > 1) return false;
	return true;

}
void MyString::Set(void) {
	cout << "Input string" << endl;
	char* _str = new char[1000];
	cin >> _str;
	str = new char[strlen(_str) + 1];
	for (unsigned j = 0; j < strlen(_str); j++)
		str[j] = _str[j];
	str[strlen(_str)] = '\0';

}
MyString MyString::pushStr(void)
{
	cout << "Method create new string" << endl;
	char* str1;
	int len = strlen(str);
	str1 = new char[len];
	int j = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (check(str[i])) {
			str1[j] = str[i];
			j++;
		}
	}
	str1[j] = '\0';
	MyString newStr(str1);
	delete[]str1;
	newStr.Print();
	return newStr;
}
int main()
{
	MyString str;
	str.Set();
	str.pushStr();
	return 0;
}
