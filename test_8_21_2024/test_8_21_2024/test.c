#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//写一个函数可以交换两个整形变量的内容
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//
//	return 0;
//}

//关于goto语句
//死循环
//int main()
//{
//	again:
//	printf("haha\n");
//	printf("hehe\n");
//	goto again;
//
//	return 0;
//}
//关机程序
//1.电脑运行起来一分钟内，关机
//2.如果输入我是猪，不关机
//int main()
//{
//
//	char input[100] ;
//	system("shutdown -s -t 2400");
//again:
//	printf("你的电脑将在4分钟后关机，如果想取消，请输入：哈\n");
//	scanf_s("%s", input,100); 
//	if (strcmp(input, "哈") == 0)
//	{
//		system("shutdown -a");
//		printf("恭喜你，已停止关机");
//	}
//	else
//		goto again;
//
//	return 0;
//}

//
//int main()
//{
//	/*char arr1[20] = { 0 };
//	char arr2[] = "hello world!";
//	strcpy_s(arr1,20, arr2);
//	printf("%s\n", arr1);*/
//	//库函数strcpy的运用
//	//memset的运用
//	char arr1[] = "hello world";
//	memset(arr1, 'x', 5);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//写一个函数找出两个整数中的较大值
//int Max(int x, int y)
//{
//	/*if (x > y)
//		return  x;
//	else
//		return  y;*/
//	return(x > y ? x : y);
//	
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	int m = Max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

//写一个函数交换两个整形变量的内容
//int Change(int x,int y)
//{
//	int z = 0;
//	z = x;
//	 x= y;
//	 y = z;
//
//}问题代码
//修改如下
void Change(int* px, int* py)
{
	int z = 0;
	z = *px;
	*px = *py;
	*py = z;
}

int main()
{
	int a = 9;
	int b = 8;
	scanf_s("%d %d", &a, &b);
	printf("交换前a=%d,b=%d\n",a, b);
	Change(&a, &b);
	printf("交换后a=%d,b=%d\n", a, b);
	return 0;
}