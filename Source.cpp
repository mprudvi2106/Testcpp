#pragma once
#include"Sum/Sum/Sum.h"
using namespace std;

//class sum
//{
//private:
//	int x_, y_;
//public:
//	sum() :x_(0), y_(0)
//	{
//
//	}
//	sum(int x, int y) :x_(x), y_(y)
//	{
//
//	}
//	int sumPrint()
//	{
//		int sum;
//		sum = x_ + y_;
//		return sum;
//	}
//
//};

int main()
{
	sum s1(2, 3);
	//cout << "Sum is:" << endl;
	s1.sumPrint();
	//cout<< endl;
	return 0;
}