#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//дһ���������Խ����������α���������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//
//	return 0;
//}

//����goto���
//��ѭ��
//int main()
//{
//	again:
//	printf("haha\n");
//	printf("hehe\n");
//	goto again;
//
//	return 0;
//}
//�ػ�����
//1.������������һ�����ڣ��ػ�
//2.����������������ػ�
//int main()
//{
//
//	char input[100] ;
//	system("shutdown -s -t 2400");
//again:
//	printf("��ĵ��Խ���4���Ӻ�ػ��������ȡ���������룺��\n");
//	scanf_s("%s", input,100); 
//	if (strcmp(input, "��") == 0)
//	{
//		system("shutdown -a");
//		printf("��ϲ�㣬��ֹͣ�ػ�");
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
//	//�⺯��strcpy������
//	//memset������
//	char arr1[] = "hello world";
//	memset(arr1, 'x', 5);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//дһ�������ҳ����������еĽϴ�ֵ
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

//дһ�����������������α���������
//int Change(int x,int y)
//{
//	int z = 0;
//	z = x;
//	 x= y;
//	 y = z;
//
//}�������
//�޸�����
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
	printf("����ǰa=%d,b=%d\n",a, b);
	Change(&a, &b);
	printf("������a=%d,b=%d\n", a, b);
	return 0;
}