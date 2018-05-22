// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CComplex {
public:
	double real, image;
	CComplex()
	{
		real = 100;
		image = 200;
		cout << "默认构造函数" << real << "+" << image << "i" << endl;
	}
	void setvalue(double r, double i)
	{
		real = r;
		image = i;
	}
	CComplex(const CComplex & c)
	{
		real = c.real;
		image = c.image;
		cout << "复制构造函数" << real << "+" << image << "i" << endl;
	}
	void dispaly()
	{
		cout << real << "+" << image << "i" << endl;
	}
};
int main()
{
	CComplex oc;
	oc.dispaly();
	oc.setvalue(500, 600);
	CComplex oc2(oc);
	oc.dispaly();
	oc2.dispaly();
	return 0;
}
