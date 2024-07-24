#include<stdio.h>
////理解算数操作符
//int main()
//{
//	float a = 6 / 3.5;
//	int b = 9 % 3;
//	printf("%f\n", a);
//	printf("%d\n", b);
//	return 0;
//}

int main()
{
	/*int flag = 0;
	if (!flag)
		printf("yes\n");*/
	//理解！
	/*int arr[10] = {0};
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof arr[10]);
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof arr / sizeof arr[0]);
	printf("%d\n", arr[10]);*/
	//sizeof操作符演示
	/*int a = 5;
	int b = a++;
	printf("%d\n", a);
	printf("%d\n", b);*/
	//理解前后置++--
	//逻辑操作符
	/*int a = 8;
	int b = 5;
	if (a && b)
		printf("haha\nsbzhangkaijun");*/
	//条件操作符;三目操作符
	/*int a = 55;
	int b = 99;
	int c = 22;
	printf("%d\n", a - 55 ? b - 38 : c - a);*/
	//条件操作符：逗号操作符
	int a = 9;
	int b = 7;
	int c = 2;
	int d = (a=a+c,b=c-2,b-a);
	printf("%d\n", d);


	return 0;
}