#include <stdio.h>
//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
//
//	return 0;
//}
//int main()
//{
//	printf("I lose my cellphone");
//	return 0;
//}
//
//
//
//
////#include <stdio.h>
//int main()
//{
//	printf("Name Age Gender\n");
//	printf("---------------------\n");
//	printf("Jack 18  Man");
//	return 0;
//}





//int main()
//{
//	int a = 40;
//	int c = 212;
//	int b = (-8 + 22) * a - 10 / c;
//	printf("%d\n", b);
//
//	return 0;
//}
//求两个数中的较大值
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//
//	int b = 0;
//	scanf_s("%d%d", &a, &b);
//	int c = Max(a, b);
//	printf(" % d\n", c);
//	return 0;
//}

//数学函数的计算机表达
int main()
{
	int x = 0;
	int y = 0;
	scanf_s("%d", &x );
	if(x > 0)
		y = -1;
	
	else if(x == 0)
		y = 0;
	
	else
		y = 1;
	printf("%d\n", y);
	return 0;
}