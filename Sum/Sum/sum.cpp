#include"Sum.h"

sum::sum() :x_(0), y_(0)
{

}

sum::sum(int x, int y) :x_(x), y_(y)
{

}

void sum::sumPrint()
{
	int sum;
	sum = x_ + y_;
	std::cout << "Sum is:" << sum << std::endl;
}