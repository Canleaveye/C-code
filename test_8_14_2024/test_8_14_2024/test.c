#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
//��ʾ����ַ��������ƶ������м���
//int main()
//{
//	/*int mid = (right - left) / 2 + left;*/
//	char arr1[] = "welcome to kevin!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr2)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//ģ��һ����¼����
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:");
//		scanf_s("%s", password,20);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("ʧ�ܣ���������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("����������������˳�����\n");
//
//	}
//
//
//
//	return 0;
//}

//��������Ϸ(���Ʒ)
void menu()
{
	printf("****************\n");
	printf("**** 1.play ****\n");
	printf("**** 0.exit ****\n");
	printf("****************\n");
		
}
void game()
{
	/*1.���������
	2.������*/

}
int main()
{
	int input = 0;
	do {
		 
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("������\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��");

		}

	} while (input);
	return 0;
}
game��������д
