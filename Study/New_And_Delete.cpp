/*
day3:New and Delete
*/
#include "study.h"

void New_And_Delete()
{
	cout << "================[New_And_Delete][Start]================" << endl;

	//1、申请单个空间
	int* p1 = new int();
	string *s1 = new string();
	int a = *p1;
	string s11 = *s1;
	*s1 = "hello 哈哈哈哈！";

	*p1 = 10;
	cout << "a=[" << a << "]"<< "   s11=[" << s11 << "]" << endl;

	//2、申请单个空间并且初始化
	int* p2 = new int(22);
	string* s2 = new string("互委会胡未");
	cout << "p2["<< *p2 << "]" << "   s2[" << *s2 << "]" << endl;

	//3、批量申请空间  不能初始化
	int* p3 = new int[10]();
	string* s3 = new string[10]();

	for (int i = 0;i < 10 ;i++)
	{
		p3[i] = i;
		s3[i] = "        *" + i;
		
		cout << "p3["<< i <<"] = " <<i<< "   s3[" << i << "] = " << s3[i] << s3[i] << s3[i] << s3[i] << s3[i] << s3[i] << endl;
	}

	//释放单个空间
	delete(p1);
	delete(p2);
	delete(s1);
	delete(s2);


	//连续释放空间 从首地址一直释放到数组末尾
	delete [](p3);
	delete [](s3);

	cout << "================[New_And_Delete][End  ]================" << endl;
}