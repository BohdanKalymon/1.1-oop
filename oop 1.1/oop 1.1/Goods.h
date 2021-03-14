#pragma once
class Goods
{
	double first;
	int	second;
public:
	bool Init(double, int);
	void Read();
	void Display() const;
	double Cost() const;
};

