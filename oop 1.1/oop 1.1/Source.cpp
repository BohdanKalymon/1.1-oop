#include "Goods.h"
#include <iostream>

using namespace std;
Goods makeGoods(double x, int y)
{
	Goods z;
	if (!z.Init(x, y))
		cout << "Wrong arguments to Init!" << endl;
	return z;
}
int main()
{
	Goods z;

	z.Read();
	z.Display();
	cout << "Cost = " << z.Cost() << endl;
	cin.get();
	return 0;
}
