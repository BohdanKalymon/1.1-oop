// #include "Goods.h"
#include <iostream>
#include <cmath>
#include "Goods.h"
using namespace std;
bool Goods::Init(double x, int y)
{
	if ((x) >= 0 && (y) >= 0)
	{
		first = x;
		second = y;
		return true;
	}
	else
	{
		return false;
	}
}

void Goods::Read()
{
	double x;
	int y;
	do
	{
		cout << "Input complex value:" << endl;
		cout << " Price = "; cin >> x;
		cout << " Amount = "; cin >> y;
	} while (!Init(x, y));
}
void Goods::Display() const
{
	cout << endl;
	cout << " Price = " << first << endl;
	cout << " Amount = " << second << endl;
}
double Goods::Cost() const
{
	return (first * second);
}

