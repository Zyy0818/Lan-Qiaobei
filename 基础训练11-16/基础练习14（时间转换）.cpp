#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string.h>
#include <math.h>
using namespace std;
int main(){
	long t;
	cin>>t; //����t
	int h = t/3600; //h��ʾʱ
	int m = (t-3600*h)/60; //m��ʾ��
	int s = t-3600*h-60*m; //s��ʾ��
	cout<<h<<":"<<m<<":"<<s;
	return 0;
}
