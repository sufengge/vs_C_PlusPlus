/*
�ػ�����
*/
#include "study.h"

 void ShutdownSystem()
 {
     int a = -1;
     int ret = -1;

     string buf;
     cout << "���ڹػ� ��ѡ�� 1 -> ���̹ػ�   2 -> 10���ػ�   3 -> ����\n";
     cin >> a;

     switch (a)
     {
     case 1: buf = "shutdown -s -t 0"; break;
     case 2: buf = "shutdown -s -t 5"; break;
     case 3: buf = "shutdown -r -t 0"; break;
     default: cout << "�Բ����������" << endl;
     }

     if (a == 1 || a == 2 || a == 3)
         ret = system(buf.c_str());

     cout << "�������н�����" << endl;
 }