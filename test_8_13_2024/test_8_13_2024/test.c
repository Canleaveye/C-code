#include<stdio.h>
//用do while循环写1-10的数
//int main()
//{
//	int a = 1;
//	do
//	{
//		if (a == 5)
//			continue;
//		printf("%d\n", a);
//		a++;
//	}
//		while (a <= 10);
//	return 0;
//}
//计算n的阶乘
//int main()
//{
//	int i = 0;
//	scanf_s("%d", &i);
//	int a = 1;
//	int c = 1;
//	
//	for (a = 1; a <= i; a++)
//	{
//		c = c * a;
//	}
//	printf("%d\n",c);
//	return 0;
//}不考虑溢出问题
//计算1！+2！+3！+。。。+10!
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int d = 0;
//
//	for (i = 0; i <= 9; i++)
//	{
//		
//		for (a=1; a <= arr[i]; a++)
//		{
//			
//			 b = b * a;
//		}
//		 d = c + b;
//		 b = 1;
//		 c = d;
//	}
//	printf("%d\n", d);
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int a = 1;
//	int c = 1;
//	int d = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		for (; a <= i; a++)
//		{
//			c = c * a;
//		}
//		d = d + c;
//	}
//	
//	printf("%d\n",d);
//	return 0;
//}
//简化版
//int main()
//{
//	int n = 0;
//	int ret =1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = ret + sum;
//
//	}
//	printf("%d", sum);
//	return 0;
//}
//在一个有序数组中寻找一个具体的数字
int main()
{
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int c =6;
	/*for (i = 0; i < sz; i++)
	{
		if (arr[i] == c)
		{
			printf("找到憨憨弟了\n");
			break;
		}
	}
	if (i == sz)
		printf("没找到，小K哭了\n");*/
	//利用折半查找找数字
	int left = 0;
	int right = sz - 1;
	//找中间元素的下标
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < c)
		{
			left = mid + 1;

		}
		else if (arr[mid] > c)
		{
			right = mid - 1;

		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到这个数");
	return 0;
}

