#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
//演示多个字符从两端移动，向中间汇聚
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

//模拟一个登录界面
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:");
//		scanf_s("%s", password,20);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("失败，重新输入\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码输入错误，退出程序\n");
//
//	}
//
//
//
//	return 0;
//}

//猜数字游戏(半成品)
void menu()
{
	printf("****************\n");
	printf("**** 1.play ****\n");
	printf("**** 0.exit ****\n");
	printf("****************\n");
		
}
void game()
{
	/*1.生成随机数
	2.猜数字*/

}
int main()
{
	int input = 0;
	do {
		 
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("猜数字\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择");

		}

	} while (input);
	return 0;
}
game函数不会写
