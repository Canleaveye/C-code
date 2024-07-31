#include<stdio.h>
////typedef unsigned int unit
//int main() 
//
//{
//	/*unsigned int b = 8;
//	unit a = 5;
//	printf("%d", a);*/
//	//关于typedef的运用  
//	return 0;
//}函数1

//函数2 
//int Candy()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//	
//}
//int main()      
//{
//	int b = 0;
//	while (b < 10)
//	{
//		Candy();
//		b++;
//	}
//
//	return 0;
//}

//声明使用外部变量
//extern int a;
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}
//
//#include "哈哈.cpp"
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//define 的运用
//#define ADD(x,y) (x)+(y)
//int main()
//{
//	
//	
//	
//	/*int a = 8;
//	int b = 8;
//	int c = ADD(a, b);
//	printf("%d\n", c);*/
//
//	return 0;
//}

//打印取地址符号
//int main()
//{
//	int a = 5;
//	printf("%p\n", &a);
//	int* p = &a;
//	//创建指针变量
//	char b = 'haha';
//	char* pc = &b;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}

////结构体
////描述一个学生
//struct Stu
//{
//	//成员
//	char Name[20];
//	int Age;
//	char Sex[10];
//	char tele[20];
// };
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", ps->Name, ps->Age, ps->Sex, ps->tele);
//}
//int main()
//{
//	//给结构体类型一个变量并初始化
//	struct Stu s = { "xiaoming", 8 , "nan", "18927485748" };
//	printf("%s %d %s %s\n", s.Name, s.Age, s.Sex, s.tele);
//	print(&s);
//
//	return 0;
//}
//今日作业
//计算带余除法
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int c = a / b;
	int d = a % b;
	
	printf("%d %d\n", c, d);
	return 0;
}