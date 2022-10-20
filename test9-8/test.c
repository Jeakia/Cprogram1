#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	/*int ch = 0;*/
//	//EOF - end of file 文件结束标志
//	/*while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;*/
//
////	//这串代码的意义是:
////	int ret = 0;
////	int ch = 0;
////	char password[20] = { 0 };
////	printf("请输入密码\n");
////	scanf("%a", password);//输入密码，并存放在password数据中心
////	//缓冲区还剩一个\n；
////	//读取一下‘\n'
////	while ((ch = getchar()) != '\n') {
////		;
////	}
////	printf("请确认(Y/N)");
////	ret = getchar();
////	if (ret == 'Y')
////	{
////		printf("确认成功\n");
////
////	}
////	else {
////		printf("放弃确认\n");
////	}
////	return 0;
//	
//
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF) {
//	//	if (ch < '0' || ch>'9')
//	//		//可以转换字符。
//	//		continue;
//	//	putchar(ch);
//	//}
//	//return 0;
//	
//
//}

//int main() {
//	int i = 10;
//
//
//
//
//
//
//	while (i < 10)//判断
//	{
//
//
//
//
//
//		//...
//		i++//调整
//	}
//}

//int main() {
//	int i = 0;
//	//初始化，判断，调整---全部整合在一起
//	for (i = 1; i <= 10; i++) {
//		if (i == 5)//不要在for循环内修改代码，防止进入死循环
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//建议for语句的循环控制变量的取值采用“前闭后开区间”写法
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 10;
//	for (i = 10; i < 10; i++) {//建议写成前闭后开写法，前面闭区间，后面开区间。
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//一些for循环的变种
//int main() {
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main() {
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++) {
//		
//		for (; j < 10; j++) {
//			printf("hehe\n");
//
//		}//10*10=100
//		
//	}
//	return 0;
//}

//int main() {
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++) {
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main() {
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k == 0; i++, k++)
//		k++;
//	return 0;
//}

//int main() {
//	do 
//		循环语句：
//	while(表达式)；
//}


//do while circle
//int main() {
//	int i = 1;
//	printf("%d ", i);
//	do {
//		i++;
//		if (i == 5)
//		continue;
//		printf("%d ", i);
//		
//	} while (i <= 10);
//	return 0;
//}

//写一个代码做n的阶乘
//int main() {
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		ret = ret * i;
//	}
//	printf("ret=%d ", ret);
//	return 0;
//}

//阶乘相加
//int main() {
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n=1; n<=3; n++){
//		ret = 1; 
//		for (i = 1; i <= n; i++) {
//			ret = ret * i;
//		}//n的阶乘
//		sum = sum + ret;
//	}
//	
//	printf("sum=%d ", sum);
//	return 0;
//}

//优化
//int main() {
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n=1; n<=10; n++){
//			ret = ret * n;
//		//n的阶乘
//		sum = sum + ret;
//	}
//	
//	printf("sum=%d ", sum);
//	return 0;
//}

//查找数
//在一个有序数组中查找具体的某个数字n，编写 int binsearch(int x,int v[], int n);
//功能：在v[0]<=v[1]<=v[2]...<=v[n-1]的数组中查找x
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//		//写一代码，在arr数组（有序的）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		if (k == arr[i]) {
//			printf("i found it: %d\n", i);
//			break;
//		}
//	}if (i == sz)
//		printf("can't find it\n");
//	
//	return 0;
//}

//二分叉
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//左下标
//	int right = sz- 1;//右下标
//
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] > k) {
//			right = mid - 1;
//
//		}
//		else if(arr[mid] < k) {
//			left = mid + 1;
//		}
//		else {
//			printf("i found it:%d", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("i cant find it");
//	}return 0;
//}


//编写代码，演示多个字符从两端移动，向中间汇聚

#include <string.h>
#include <windows.h>
#include <stdlib.h>

//int main() {
//	//welcome to bit !!!
//	//w#################
//	//we###############!
//	//wel#############!!
//	//...
//	//welcome to bit !!!
//	//
//	char arr1[] = "welcome to bit !!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while(left<=right) {
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

int main() {
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++) {
		printf("请输入密码\n");
		scanf("%s", password);
		if (strcmp(password,"123456")==0) {//==不能用比较两个字符是否相等，应该用一个库函数-strcmp
			printf("登录成功\n");
			break;
		}
		else {
			printf("密码输入错误，请重试\n");
		}
		if (i == 3) {
			printf("三次密码输入错误，请退出\n");
		}
	}
	return 0;
}