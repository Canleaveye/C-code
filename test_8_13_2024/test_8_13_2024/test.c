#include<stdio.h>
//��do whileѭ��д1-10����
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
//����n�Ľ׳�
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
//}�������������
//����1��+2��+3��+������+10!
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
//�򻯰�
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
//��һ������������Ѱ��һ�����������
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
			printf("�ҵ���������\n");
			break;
		}
	}
	if (i == sz)
		printf("û�ҵ���СK����\n");*/
	//�����۰����������
	int left = 0;
	int right = sz - 1;
	//���м�Ԫ�ص��±�
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
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ��������");
	return 0;
}

