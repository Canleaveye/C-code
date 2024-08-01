#include <stdio.h>
//if 语句的运用
//int main()
//{
//	int age = 0;
//	scanf("你的年龄 %d\n", &age);
//	
//
//	if (age < 12)
//		printf("开心的小学鸡or小娃娃");
//	else if (age >= 12 && age <18)
//		printf("苦逼中学生\n");
//	
//	else if (age >= 18 && age < 28)
//		printf("青年人\n");
//	else if (age >= 28 && age <= 50)
//		printf("中年人\n");
//	else
//		printf("安心养老\n");
//	return 0;
//}

//int main()
//{
//	int b = 9;
//	if (1 == b)
//		printf("yeyeye\n");
//	if (b = 3)
//		printf("你好\n");
//	printf("%d\n", b);
//
//	return 0;
//}

//判断一个数为奇数还是偶数
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	if (a % 2 == 1)
//		printf("这个数为奇数\n");
//	else if (a % 2 == 0)
//		printf("这个数为偶数\n");
//	else
//		printf("既不是奇数也不是偶数\n");
//
//
//
//	return 0;
//}
//输出1-100的奇数(要用到while cycle)
//int main()
//{
//	int a = 0;
//	while (a <= 100)
//	{
//	 a = a + 1;
//		if (a % 2 == 1)
//			printf("%d\n", a);
//	}
//
//	return 0;
//}
//switch语句的运用和理解
int main()
{
	int day = 0;
	scanf_s("%d", &day);
	switch (day)
	{
	case 1:
		
	case 2:
		
	case 3:
		
	case 4:
		
	case 5:
		printf("weekday");
			break;
	case 6:
		
	case 7:
		printf("weekend");
			break;
	default:
		printf("输入错误");
		break;

	}
	return 0;
}