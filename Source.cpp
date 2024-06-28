#include<iostream>
#include<string>

class sum
{
private:
	int x_, y_;
public:
	sum() :x_(0), y_(0)
	{

	}
	sum(int x, int y) :x_(x), y_(y)
	{

	}
	int sumPrint()
	{
		int sum;
		sum = x_ + y_;
		return sum;
	}

};

int main()
{
	sum s1(2, 3);
	std::cout << "Sum is:" << s1.sumPrint() << std::endl;
	return 0;
}