#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//int swap(char arr[], char arr2[], int z)
//{
//	int s = z - 3;
//	for (int i = 0; i < z - 2; i++)
//	{
//		int count = 0;
//		char t = arr[i];
//		arr[i] = arr[z - 1 - s];
//		arr[z - 1 - s] = t;
//		s--;
//		for (int i = 0; i < z - 1; i++)
//		{
//			if (arr[i] == arr2[i])
//				count++;
//		}
//		if (count == z - 1)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "AABCD";
//	char arr2[] = "BCDAA";
//	int z = sizeof(arr) / sizeof(arr[0]);
//	int ret = swap(arr, arr2, z);
//	printf("对比的结果为:%d", ret);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//void Change_str(char* start, char* end, int num)
//{
//        while (*end != '\0')
//		     {
//		 * start = *start^*end;
//		 * end = *start^*end;
//		 * start = *start^*end;
//		         ++start;
//		         ++end;
//		     }
//}
//
// int main()
// {
//	     char str[100];
//	     printf("请输入一段字符串：\n");
//	     scanf("%s", &str);
//	     printf("请输入左旋的字符数k:\n");
//	     int k = 0;
//	     scanf("%d", &k);
//	     int num = (int)strlen(str);
//	     for (int i = 0; i < k; ++i)
//		     {
//		         Change_str(str, str + 1, num);
//		     }
//	   printf("%s\n", str);
//	     return 0;
//}
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3
int Findnum(int arr[ROW][COL], int row, int col, int key) {
	int left = 0;
	int right = col - 1;
	while ((left >= 0) && (right < col)) {
		//如果这个数字小于key，则向后移一位；
		if (arr[left][right] < key) {
			left++;
		}
		//如果这个数字大于key，则向前移一位；
		if (arr[left][right] > key) {
			right--;
		}
		//如果这个数字等于key，则返回1；
		if (arr[left][right] == key) {
			return 1;
		}
	}
	//否则返回1；
	return 0;
}
int main() {
	//定义一个二维数组；
	int arr[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("请输入要查找的数字：");
	int key = 0;
	scanf("%d", &key);
	//找到了返回1,找不到返回0；
	int ret = Findnum(arr, ROW, COL, key);
	if (1 == ret)
	{
		printf("找到了！\n");
	}
	if (0 == ret)
	{
		printf("找不到!\n");
	}
	system("pause");
	return 0;
}
