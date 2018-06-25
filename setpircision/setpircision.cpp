// setpircision.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{

	double n = 1234567.89;
	int m = 123456789;

	cout << setprecision(5) << n << endl;
	return 0;

}