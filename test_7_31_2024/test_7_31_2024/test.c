#include <stdio.h>
//if ��������
//int main()
//{
//	int age = 0;
//	scanf("������� %d\n", &age);
//	
//
//	if (age < 12)
//		printf("���ĵ�Сѧ��orС����");
//	else if (age >= 12 && age <18)
//		printf("�����ѧ��\n");
//	
//	else if (age >= 18 && age < 28)
//		printf("������\n");
//	else if (age >= 28 && age <= 50)
//		printf("������\n");
//	else
//		printf("��������\n");
//	return 0;
//}

//int main()
//{
//	int b = 9;
//	if (1 == b)
//		printf("yeyeye\n");
//	if (b = 3)
//		printf("���\n");
//	printf("%d\n", b);
//
//	return 0;
//}

//�ж�һ����Ϊ��������ż��
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	if (a % 2 == 1)
//		printf("�����Ϊ����\n");
//	else if (a % 2 == 0)
//		printf("�����Ϊż��\n");
//	else
//		printf("�Ȳ�������Ҳ����ż��\n");
//
//
//
//	return 0;
//}
//���1-100������(Ҫ�õ�while cycle)
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
//switch�������ú����
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
		printf("�������");
		break;

	}
	return 0;
}