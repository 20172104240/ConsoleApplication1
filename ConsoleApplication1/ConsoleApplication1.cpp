// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
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
		cout << "Ĭ�Ϲ��캯��" << real << "+" << image << "i" << endl;
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
		cout << "���ƹ��캯��" << real << "+" << image << "i" << endl;
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
