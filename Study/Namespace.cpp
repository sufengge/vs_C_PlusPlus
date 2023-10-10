/*
day2:命名空间
*/
#include "study.h"
namespace sp1 {
	int a = 9;
	void fun1(int num);

	namespace sp1_1 {
		void fun1(int num);
	}
}

void fun1(int num)
{
	cout << "num 1 ["<< num <<"]" << endl;
}

void sp1::fun1(int num)
{
	cout << "num 2 [" << num << "]" << endl;
}

void sp1::sp1_1::fun1(int num)
{
	cout << "num 3 [" << num << "]" << endl;
}

namespace sp1 {
	void fun2(int num);
}

//命名空间取别名

namespace b = sp1;



//空间污染
void sp1::fun2(int num)
{
	cout << "num 4 [" << num << "]" << endl;
}

void Namespace(){
	int a = 3;


	namespace c = sp1;

	cout << "a = [" << a << "]" << endl;
	cout << "a = [" << sp1::a << "]" << endl;

	fun1(3);
	sp1::fun1(3);
	sp1::sp1_1::fun1(3);
	sp1::fun2(3);
	c::fun2(3);
	b::fun2(3);

}