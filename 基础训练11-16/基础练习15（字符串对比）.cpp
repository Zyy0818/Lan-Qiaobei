#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cstdio>
#include <string.h>
using namespace std;
int compare(string first, string second)
{
	if (first != second)   //如果两个字符串不完全相等
	{                      //如果两个字符串长度相等
		if (first.length() == second.length())
		{                  //将其全部转换为小写
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
			{   //如果小写字母完全相等，那么就是第3种情况
				return 3;
			}
			else
			{   //如果区分大小写，也还是不一样的话，就是第4种情况
				return 4;
			}
		}
		else return 1;   //如果长度不等，就是第1种情况  		
	}
	else return 2;       //如果完全相等，就是第2种情况
		
	
}
 
int main(void)
{
	string first, second;
	cin >> first >> second;
	cout << compare(first, second) << endl;
	return 0;
}

