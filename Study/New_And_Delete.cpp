/*
day3:New and Delete
*/
#include "study.h"

void New_And_Delete()
{
	cout << "================[New_And_Delete][Start]================" << endl;

	//1�����뵥���ռ�
	int* p1 = new int();
	string *s1 = new string();
	int a = *p1;
	string s11 = *s1;
	*s1 = "hello ����������";

	*p1 = 10;
	cout << "a=[" << a << "]"<< "   s11=[" << s11 << "]" << endl;

	//2�����뵥���ռ䲢�ҳ�ʼ��
	int* p2 = new int(22);
	string* s2 = new string("��ί���δ");
	cout << "p2["<< *p2 << "]" << "   s2[" << *s2 << "]" << endl;

	//3����������ռ�  ���ܳ�ʼ��
	int* p3 = new int[10]();
	string* s3 = new string[10]();

	for (int i = 0;i < 10 ;i++)
	{
		p3[i] = i;
		s3[i] = "        *" + i;
		
		cout << "p3["<< i <<"] = " <<i<< "   s3[" << i << "] = " << s3[i] << s3[i] << s3[i] << s3[i] << s3[i] << s3[i] << endl;
	}

	//�ͷŵ����ռ�
	delete(p1);
	delete(p2);
	delete(s1);
	delete(s2);


	//�����ͷſռ� ���׵�ַһֱ�ͷŵ�����ĩβ
	delete [](p3);
	delete [](s3);

	cout << "================[New_And_Delete][End  ]================" << endl;
}