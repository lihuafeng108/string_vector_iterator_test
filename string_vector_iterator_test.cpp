#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	string str1 = "string类型的一些简单测试:";  //string 是C++标准库类型，是一种抽象数据类型
	string str2 = "piece1: one, ";
	string str3 = "piece2: two, ";
	string str4 = "piece1: one, ";

	cout << str1 << endl;
	cout << "str1 size:" << str1.size() << endl;
	cout << str2 + str3 << endl;
	cout << "str2 == str3 ? :" << (str2 == str3) << endl;
	cout << "str2 == str4 ? :" << (str2 == str4) << endl;

	cout << "请连续输入连个字符:";
	string str_input_1, str_input_2;
	cin >> str_input_1 >> str_input_2;
	cout << "输入的两个字符打印出来:" << str_input_1 << endl << str_input_2 << endl << endl;

	cout << "string迭代器iterator一个测试:" << endl;
	vector<string> vstr = { "字符1", "字符2", "字符3", "字符4" };
	vstr.push_back("新加字符");
	vector<string>::const_iterator it;
	for (it = vstr.begin(); it != vstr.end(); ++it)
	{
		cout << *it << endl;
	}
	return 0;
}