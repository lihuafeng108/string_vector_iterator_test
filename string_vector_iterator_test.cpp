#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	string str1 = "string���͵�һЩ�򵥲���:";  //string ��C++��׼�����ͣ���һ�ֳ�����������
	string str2 = "piece1: one, ";
	string str3 = "piece2: two, ";
	string str4 = "piece1: one, ";

	cout << str1 << endl;
	cout << "str1 size:" << str1.size() << endl;
	cout << str2 + str3 << endl;
	cout << "str2 == str3 ? :" << (str2 == str3) << endl;
	cout << "str2 == str4 ? :" << (str2 == str4) << endl;

	cout << "���������������ַ�:";
	string str_input_1, str_input_2;
	cin >> str_input_1 >> str_input_2;
	cout << "����������ַ���ӡ����:" << str_input_1 << endl << str_input_2 << endl << endl;

	cout << "string������iteratorһ������:" << endl;
	vector<string> vstr = { "�ַ�1", "�ַ�2", "�ַ�3", "�ַ�4" };
	vstr.push_back("�¼��ַ�");
	vector<string>::const_iterator it;
	for (it = vstr.begin(); it != vstr.end(); ++it)
	{
		cout << *it << endl;
	}
	return 0;
}