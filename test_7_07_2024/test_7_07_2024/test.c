#include <Stdio.h>
//int main()
//{
//	/*const int a = 10;
//	
//	printf("%d\n", a);*/
//	int arr[10] = { 0 };
//
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f','\0'};
//	//printf(" % s\n", arr1);
//	//printf(" % s\n", arr2);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//int main()
//{
//	//printf("%c\n", 'a');
//	//printf("%c\n", '\'');
//	printf("\a");
//	return 0;
//}
//int main()
//{
//	int input = 1;
//	printf("�������\n");
//	printf("Ҫ�ú�ѧϰ��(Ҫ=1����Ҫ=0)");
//	scanf_s("%d", &input);
//	if (input == 1)
//	{
//		printf("���ϸ�\n");
//	}
//	else
//	{
//		printf("��С��\n");
//	}
//	return 0;
//}
//2000����Ч����Ļ���
//int main()
//{
//	int line = 0;
//	printf("��ʼѧϰ���");
//	while(line < 20000)
//	{
//		printf("����ѧϰ���:%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("�ɹ��ϰ�");
//	}
//	else
//	{
//		printf("����Ŭ����������");
//	}
//	return 0;
//}
int Add(int x, int y)
{
	return (x + y);
}
int main()
{
	int a = 2;
	int b = 3;
	scanf_s("%d %d", &a, &b);
	int sum = Add(a,b);
	printf("%d\n", sum);
	return 0;
}