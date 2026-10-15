// multilevel inheritance
#include<iostream>
using namespace std;
class complex
{
	public:
		void fun()
		{
		 cout<<"i am in complex";
		}
};
class simplex:public complex
{
};
class multiplex:protected simplex
{
	public:
	fun2()
	{
		simplex s;
		s.fun();
	}
};
main()
{
	complex c1;
	simplex s1;
	multiplex m1;
	m1.fun2();
}





