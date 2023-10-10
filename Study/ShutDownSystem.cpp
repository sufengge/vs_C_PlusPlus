/*
关机程序
*/
#include "study.h"

 void ShutdownSystem()
 {
     int a = -1;
     int ret = -1;

     string buf;
     cout << "正在关机 请选择 1 -> 立刻关机   2 -> 10秒后关机   3 -> 重启\n";
     cin >> a;

     switch (a)
     {
     case 1: buf = "shutdown -s -t 0"; break;
     case 2: buf = "shutdown -s -t 5"; break;
     case 3: buf = "shutdown -r -t 0"; break;
     default: cout << "对不起输入错误" << endl;
     }

     if (a == 1 || a == 2 || a == 3)
         ret = system(buf.c_str());

     cout << "程序运行结束！" << endl;
 }