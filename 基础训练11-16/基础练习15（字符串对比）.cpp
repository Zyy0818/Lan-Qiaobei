#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cstdio>
#include <string.h>
using namespace std;
int compare(string first, string second)
{
	if (first != second)   //��������ַ�������ȫ���
	{                      //��������ַ����������
		if (first.length() == second.length())
		{                  //����ȫ��ת��ΪСд
			for (int i = 0; i < first.length(); i++)
			{
				if (first[i] >= 'A'&&first[i] <= 'Z')
				{
					first[i] = first[i] + 32;
				}
				if (second[i] >= 'A'&&second[i] <= 'Z')
				{
					second[i] = second[i] + 32;
				}
			}
			if (first == second)
			{   //���Сд��ĸ��ȫ��ȣ���ô���ǵ�3�����
				return 3;
			}
			else
			{   //������ִ�Сд��Ҳ���ǲ�һ���Ļ������ǵ�4�����
				return 4;
			}
		}
		else return 1;   //������Ȳ��ȣ����ǵ�1�����  		
	}
	else return 2;       //�����ȫ��ȣ����ǵ�2�����
		
	
}
 
int main(void)
{
	string first, second;
	cin >> first >> second;
	cout << compare(first, second) << endl;
	return 0;
}

