//死循环
#include<stdio.h>
//int main()
//
//{
//	while (1)
//	{
//		printf("hahaha ");
//	}
//	return 0;
//}
//活循环
//int main()
//{
//	int a = 1;
//	while (a <= 20)
//	{
//		printf("%d ", a);
//		a++;
//	}
//	return 0;
//}
//while 循环中break continue 的运用
//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		a++;
//		if (a == 5)
//			continue;
//		 
//
//	}
//	return 0;
//}
//int main()
//{
//	/*int ch = getchar();
//	printf("%c\n", ch);
//	putchar( ch)
//	/*int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//	//有什么用呢？
//	//举一个例子
//	//假设密码是个字符串
//	char password[1000] = { 0,9,10};
//	printf("请输入密码：");
//	scanf_s("%s", password,1000);
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("\n请确认密码(Y or N)：");
//	int ret = getchar();
//	if ('Y' == ret)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//
//
//	return 0;
//}
//C语言作业
//int main()
//{
//	/*printf("%c\n", 97);*/
//	int arr[] = { 1,15,20,18,99,100 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf_s("%4d%d2d%2d", &year,&month,&date);
//
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d", date);
//
//	return 0;
//}
//int main()
//{
//	int stu = 0;
//	float a = 0.0f;
//	float b = 0.0f;
//	float c = 0.0f;
//	scanf_s("%d; %f, %f, %f", &stu, &a, &b, &c);
//	printf("The each subject score of No.%d is %.2f, %.2f, %.2f.",stu,a,b,c);
//	return 0;
//}

//printf的返回值
//int main()
//{
//	int a = printf("Hello world!");
//	printf("\n%d\n", a);
//	return 0;
//}
//四个数中选一个最大的数
//int main()
//{
//	/*int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf_s("%d %d %d %d", &a, &b, &c, &d);*/
//	int i =1;
//	int n = 0;
//	int max = 0;
//	scanf_s("%d", &max);
//	while (i < 4)
//
//	{
//		scanf_s("%d", &n);
//		if (n > max)
//			max = n;
//		i++;
//	}
//	printf("%d", max);
//	
//	return 0;
//}
//计算球的体积
//int main()
//{
//	float r = 0.00;
//	scanf_s("%f", &r);
//	float t = 3.1415926;
//	float V = 4 / 3 * t * r * r * r;
//	printf("%.3f",V);
//
//	return 0;
//}
////计算一个人的BMI
//int main()
//{
//	int metre = 0;
//	int weight = 0;
//	scanf_s("%d %d",& weight, &metre);
//	double c = metre / 100.0;
//	double BMI = weight / c / c;
//	printf("%.2lf", BMI);
//
//
//	return 0;
//}
//学习for 循环
//打印1-10的数
//int main()
//{
//	int a = 1;
//	for (a=1;a < 11;a++)
//	{
//		if (a== 7)
//			break;
//		printf("%d ", a);
//		a++;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	for(i=100;i<=200;i++)
//	return 0;
//}
//for循环的变种
//死循环
//int main()
//{
//	for (;;)
//	{
//		printf("哦哦吃屎");
//	}
//	return 0;
//}
//for循环的嵌套
int main()
{
	int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		for (; j < 10; j++)
		{
			printf("haha ");
		}

	}
	return 0;
}