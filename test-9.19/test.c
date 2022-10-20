#define  _CRT_SECURE_NO_WARNINGS 1



//add(int x, int y) {
//	int z = 0;
//	z + z + y;
//	return z;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum =add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//c语言中的分类
//	库函数
//	自定义函数

//www.cplusplus.com

//strcpy

#include<string.h>
#include<stdio.h>
//int main() {
//	//strlen = string lenght -- 跟字符串长度有关的
//	//strcpy = string copy -- 字符串拷贝
//
//	char arr1[] = "bit";
//	char arr2[20] = "###########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//memset
//memory -- 内存； set -- 设置
//void * ptr，int value ,size_t num
// ptr 内存块 value 值 num 个数

//int main() {
//	char arr[] = "hello world";
//	memset(arr, '*',5);
//	printf("%s\n", arr);
//	return 0;
//	//***** world
//}

//自定义函数
//int get_max(int x, int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	int max = get_max(a,b);
//	printf("max=%d\n", max);
//	max=get_max(100, 200);
//	printf("max=%d\n", max);
//	return 0;
//}

//写一个函数，整型交换的内容
//int main() {
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//
//}

//为什么要用swap2不用swap1呢
//当实参传给形参的时候
//形参是实参的一份临时拷贝
//对形参的修改是不会改变实参的。
//所以不能达到最好的效果

//Swap2(int* pa, int* pb) {
//	int tmp = 0;	
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}


//void Swap1(int x, int y) {//void 没有返回值
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	//传值调用
//	//Swap1(a, b);
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	//调用函数swap2(传址调用）
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//
//}


//形参-形式参数-形式上的参数

//int main() {
//	int a = 10;
//	int* pa=&a;//pa指针变量
//	*pa=20;//解引用操作
//	printf("%d\n", a);
//	return 0;
//}
//传值调用，函数的形参和实参分别占用不同内存块，对形参的修改不会影响到实参2
//传址调用，可以让函数和函数外面的变量建立真正的联系。

#include<math.h>
//练习
//0,是素数返回1，不是返回0
//int is_prime(int n) {
//	//2->n-1
//	int j = 0;
//	for (j = 2;j < n;j++) {
//		if (n % j == 0)
//			return 0;
//		
//	}
//	return 1;
//}
//int main() {
//	//打印100-200之间的数组
//	int i = 0;
//	for (i = 100; i <= 200;i++) {
//		//判断i是否是素数
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//1,写一个函数判断一年是否是闰年
//int is_leap_year(int y) {
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main() {
//	int year = 0;
//	for (year = 1000; year <= 2000; year++) {
//		//判断year是否是闰年
//		if (1 == is_leap_year(year)) {
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//


//2,二分查找	
					//本质上arr是一个指针
//int binary_search(int arr[], int k,int sz) {
//	//算法的实现
//	
//	int left = 0;
//	int right = sz-1;
//
//	while (left <= right) {
//		int mid = (left + right)/ 2;//中间元素的下标,必须要写在循环里面
//		if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//	 
//
//}

//3,写一个函数实现一个整形有序数组的二分查找
//int main() {
//	//二分查找
//	//在一个有序数组中查找具体的某个数字
//	//如果找到了返回，这个数字的下标，找不到的返回-1
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//						首元素的地址
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1) {
//		printf("can't find it\n");
//	}
//	else {	
//		printf("found it: %d\n", ret);
//	}
//	return 0;
//}



//4,写一个函数，每一次调用n+1
//void add(int *p) {
//	(*p)++;
//}
//int main() {
//
//	int num = 0;
//	add(&num);
//	printf("num=%d\n", num);//1
//	add(&num);
//	printf("num=%d\n", num);//2
//	add(&num);
//	printf("num=%d\n", num);//3
//	return 0;
//}

//函数的嵌套调用和链式访问
//嵌套调用--函数和函数之间的有机结合
//链式访问--把一个函数的返回值作为另一个函数的参数

//int main() {
//	int len = 0;
//	////1
//	//len=strlen("abc");
//	//printf("%d\n", len);
//	////2
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//int main() {
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

#include"add.h"//函数叫什么，参数是什么，返回类型是什么，但是具体是不是存在，不重要。

int main() {
	int a = 10;
	int b = 20;
	int sum = 0;
	//函数调用
	sum = add(a, b);
	printf("%d\n", sum);
	return 0;
}


