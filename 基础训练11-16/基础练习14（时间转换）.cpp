#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string.h>
#include <math.h>
using namespace std;
int main(){
	long t;
	cin>>t; //输入t
	int h = t/3600; //h表示时
	int m = (t-3600*h)/60; //m表示分
	int s = t-3600*h-60*m; //s表示秒
	cout<<h<<":"<<m<<":"<<s;
	return 0;
}
